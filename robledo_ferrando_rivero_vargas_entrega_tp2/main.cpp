// Robledo Ana
// Ferrando Pablo
// Rivero Lorena
// Vargas Camilo

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <ncurses.h>
#include <vector>

#include "Constantes.h"
#include "Deuda.h"
#include "Estatus.h"
#include "Jugador.h"
#include "Mapa.h"

using namespace std;

// Funciones auxiliares
void mostrarStats(Jugador &jugador, int puntos);
void mostrarGameOver();
void mostrarGanaste();

// Variable global para controlar si seguimos jugando
bool seguirJugando = true;

int main() {
  initscr();
  noecho();
  curs_set(0);
  keypad(stdscr, TRUE);
  nodelay(stdscr, TRUE);
  srand(time(NULL));

  // Chequeo del tamaño de la terminal
  if (LINES < ALTO || COLS < ANCHO) {
    endwin();
    printf("La terminal tiene que tener como mínimo %dx%d\n\n", ANCHO, ALTO);
    exit(1);
  }

  // Bucle principal del juego
  do {
    // Variables del juego
    int puntos = 0;
    const int MAX_PUNTOS = 10;
    bool game_over = false;

    // Inicializar objetos
    Jugador jugador(ANCHO / 2, ALTO - 2);
    jugador.setEnergia(10);
    jugador.setVidas(3);

    Estatus estatus(rand() % 110, 1);
    Mapa mapa;
    mapa.inicializar_colores();

    // Inicializar vector de deudas con la primera
    vector<Deuda> deudas;
    deudas.push_back(Deuda(rand() % (ANCHO - 7), 1));

    // Bucle principal del juego
    while (!game_over) {
      erase();           // Limpiar pantalla
      box(stdscr, 0, 0); // Dibujar borde
      mapa.dibujar();    // Dibujar mapa

      // Leer tecla
      int tecla = getch();

      // Salir con ESCAPE (27)
      if (tecla == 27) {
        seguirJugando = false;
        break;
      }

      // Movimiento del jugador
      if (jugador.puedeMoverse()) {
        jugador.mover(tecla, mapa.getMatriz());
      }

      // Disparo manual al presionar ESPACIO
      if (tecla == ' ' && jugador.tieneDisparoActivo()) {
        jugador.disparar();
      }

      // Activar disparo al tocar premio
      char celda = mapa.getMatriz()[jugador.getY()][jugador.getX()];
      if (celda == PREMIO && !jugador.tieneDisparoActivo()) {
        jugador.activarDisparo();
      }

      // Actualizar y dibujar objetos
      estatus.update();
      estatus.draw();
      jugador.actualizarEstado();
      jugador.draw();

      for (auto &d : deudas) {
        d.update();
        d.draw();
      }

      // COLISIONES
      // 1. Disparos vs deudas
      for (auto &d : deudas) {
        for (auto &disp : jugador.getDisparos()) {
          if (disp.estaActivo() && d.colisionaCon(disp.getX(), disp.getY())) {
            disp.desactivar();
            puntos++;

            // Reaparece la deuda arriba
            d.setY(1);
            d.setX(rand() % (ANCHO - d.getAncho()));

            // Acelerar caída según puntos
            int nuevaVel = max(1, 8 - puntos);
            d.setVelocidad(nuevaVel);

            // Aumentar cantidad de deudas cada 3 puntos, hasta 5
            if (puntos % 3 == 0 && deudas.size() < 5) {
              deudas.push_back(Deuda(rand() % (ANCHO - 7), 1));
            }
          }
        }
      }

      // 2. Jugador vs deudas (solo si no tiene disparo)
      // if (!jugador.tieneDisparoActivo()) {
      for (auto &d : deudas) {
        if (d.colisionaCon(jugador.getX(), jugador.getY())) {
          jugador.setVidas(jugador.getVidas() - 1);
          jugador.caer();

          d.setY(1);
          d.setX(rand() % (ANCHO - d.getAncho()));

          // Reset velocidad a lento al chocar con jugador
          d.setVelocidad(8);
        }
        // }
      }

      // 3. Jugador vs Estatus
      if (estatus.colisionaCon(jugador.getX(), jugador.getY())) {
        jugador.perderEnergia(1);
      }

      // Dibujar Display
      mostrarStats(jugador, puntos);

      // Fin del juego por victoria o derrota
      if (puntos >= MAX_PUNTOS) {
        mostrarGanaste();
        game_over = true;
      } else if (jugador.getVidas() <= 0 || jugador.getEnergia() <= 0) {
        mostrarGameOver();
        game_over = true;
      }

      refresh();
      napms(80); // Espera 80 ms
    }

  } while (seguirJugando);

  endwin(); // Termina ncurses
  return 0;
}

// Funciones auxiliares
void mostrarStats(Jugador &jugador, int puntos) {
  mvprintw(1, 2, "ENERGIA: ");
  for (int i = 0; i < jugador.getEnergia(); i++)
    addch(ACS_CKBOARD);

  mvprintw(1, 20, "VIDAS: ");
  for (int i = 0; i < jugador.getVidas(); i++)
    addch(ACS_DIAMOND);

  mvprintw(1, 40, "PUNTOS: %d", puntos);
}

void mostrarGameOver() {
  nodelay(stdscr, FALSE);
  mvprintw(ALTO / 2, ANCHO / 2 - 5, "GAME OVER");
  mvprintw(ALTO / 2 + 1, ANCHO / 2 - 10, "VOLVER A JUGAR? (S/N)");
  refresh();
  int respuesta;
  do {
    respuesta = getch();
  } while (respuesta != 's' && respuesta != 'S' && respuesta != 'n' &&
           respuesta != 'N');

  seguirJugando = (respuesta == 's' || respuesta == 'S');
  nodelay(stdscr, TRUE);
}

void mostrarGanaste() {
  nodelay(stdscr, FALSE);
  mvprintw(ALTO / 2, ANCHO / 2 - 5, "¡GANASTE!");
  mvprintw(ALTO / 2 + 1, ANCHO / 2 - 10, "¿JUGAR DE NUEVO? (S/N)");
  refresh();
  int respuesta;
  do {
    respuesta = getch();
  } while (respuesta != 's' && respuesta != 'S' && respuesta != 'n' &&
           respuesta != 'N');

  seguirJugando = (respuesta == 's' || respuesta == 'S');
  nodelay(stdscr, TRUE);
}