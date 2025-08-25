#include <cstdlib>
#include <ctime>
#include <iostream>
#include <ncurses.h>

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

  // Chuequeo del tamanio de la terminal

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

    Deuda deuda(rand() % (ANCHO - 7), 1);
    Estatus estatus(rand() % 110, 1);
    Mapa mapa;
    mapa.inicializar_colores();

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
        break; // Sale del while (game loop)
      }
      // Movimiento del jugador
      if (jugador.puedeMoverse()) {
        jugador.mover(tecla, mapa.getMatriz());
      }

      // Disparo manual al presionar ESPACIO
      if (tecla == ' ' && jugador.tieneDisparoActivo()) {
        jugador.disparar();
      }

      // Detectar si el jugador tocó un PREMIO (*)
      char celda = mapa.getMatriz()[jugador.getY()][jugador.getX()];
      if (celda == PREMIO && !jugador.tieneDisparoActivo()) {
        jugador.activarDisparo(); // Se habilita el disparo
      }

      // Actualizar y dibujar objetos
      deuda.update();
      deuda.draw();
      estatus.update();
      estatus.draw();
      jugador.actualizarEstado();
      jugador.draw();

      // COLISIONES
      // 1. Disparos vs Deuda
      if (jugador.tieneDisparoActivo()) {
        for (auto &d : jugador.getDisparos()) {
          if (d.estaActivo() && d.getY() == deuda.getY() &&
              d.getX() >= deuda.getX() &&
              d.getX() < deuda.getX() + deuda.getAncho()) {

            d.desactivar(); // Desactiva disparo
            puntos++;       // Suma punto
            deuda.setY(1);  // Reaparece arriba
            deuda.setX(rand() % (ANCHO - deuda.getAncho()));
          }
        }
      }

      // 2. Jugador vs Deuda (solo si no tiene disparo)
      if (!jugador.tieneDisparoActivo() &&
          deuda.colisionaCon(jugador.getX(), jugador.getY())) {
        jugador.setVidas(jugador.getVidas() - 1);
        jugador.caer();
        deuda.setY(1);
        deuda.setX(rand() % (ANCHO - deuda.getAncho()));
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

      refresh(); // Mostrar todo en pantalla
      napms(80); // Espera 80 ms
    }

  } while (seguirJugando);

  endwin(); // Termina ncurses
  return 0;
}

// Muestra energía, vidas y puntos
void mostrarStats(Jugador &jugador, int puntos) {
  mvprintw(0, 2, "ENERGIA: ");
  for (int i = 0; i < jugador.getEnergia(); i++) {
    addch(ACS_CKBOARD);
  }

  mvprintw(0, 20, "VIDAS: ");
  for (int i = 0; i < jugador.getVidas(); i++) {
    addch(ACS_DIAMOND);
  }

  mvprintw(0, 40, "PUNTOS: %d", puntos);
}

// Pantalla de Game Over
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

// Pantalla de victoria
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