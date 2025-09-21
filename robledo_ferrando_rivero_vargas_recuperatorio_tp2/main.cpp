// Robledo Ana
// Ferrando Pablo
// Rivero Lorena
// Vargas Camilo

#include "Cartel.h"
#include "Constantes.h"
#include "Deuda.h"
#include "Estatus.h"
#include "Jugador.h"
#include "Mapa.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <ncurses.h>
#include <vector>

using namespace std;

void mostrarStats(Jugador &jugador, int puntos);
void mostrarGameOver();
void mostrarGanaste();

bool seguirJugando = true;

int main() {
  initscr();
  noecho();
  curs_set(0);
  keypad(stdscr, TRUE);
  nodelay(stdscr, TRUE);
  srand(time(NULL));

  if (LINES < ALTO || COLS < ANCHO) {
    endwin();
    printf("La terminal tiene que tener como mínimo %dx%d\n\n", ANCHO, ALTO);
    exit(1);
  }

  do {
    int puntos = 0;
    const int MAX_PUNTOS = 20;
    bool game_over = false;

    Jugador jugador(ANCHO / 2, ALTO - 3);
    jugador.setEnergia(3);
    jugador.setVidas(3);

    Estatus estatus(rand() % 110, 1);
    Mapa mapa;
    mapa.inicializar_colores();

    vector<Deuda> deudas;
    deudas.push_back(Deuda(rand() % (ANCHO - 7), 1));

    while (!game_over) {
      erase();
      box(stdscr, 0, 0);
      mapa.dibujar();

      int tecla = getch();

      if (tecla == 27) {
        seguirJugando = false;
        break;
      }

      if (jugador.puedeMoverse()) {
        jugador.mover(tecla, mapa.getMatriz());
      }

      if (tecla == ' ' && jugador.tieneDisparoActivo()) {
        jugador.disparar();
      }

      char celda = mapa.getMatriz()[jugador.getY()][jugador.getX()];
      if (celda == PREMIO && !jugador.tieneDisparoActivo()) {
        jugador.activarDisparo();
      }

      estatus.update();
      estatus.draw();
      jugador.actualizarEstado();
      jugador.draw();

      for (auto &d : deudas) {
        d.update();
        d.draw();
      }

      // Colisiones disparos vs deudas
      for (auto &d : deudas) {
        for (auto &disp : jugador.getDisparos()) {
          if (disp.estaActivo() && d.colisionaCon(disp.getX(), disp.getY())) {
            disp.desactivar();
            puntos++;

            d.setY(1);
            d.setX(rand() % (ANCHO - d.getAncho()));

            int nuevaVel = max(1, 6 - puntos);
            d.setVelocidad(nuevaVel);

            if (puntos % 3 == 0 && deudas.size() < 8) {
              deudas.push_back(Deuda(rand() % (ANCHO - 7), 1));
            }
          }
        }
      }

      // Colisiones jugador vs deudas
      for (auto &d : deudas) {
        if (d.colisionaCon(jugador.getX(), jugador.getY())) {
          jugador.setVidas(jugador.getVidas() - 1);
          jugador.caer();

          d.setY(1);
          d.setX(rand() % (ANCHO - d.getAncho()));
          d.setVelocidad(8);
        }
      }

      // Colisión jugador vs estatus
      if (estatus.colisionaCon(jugador.getX(), jugador.getY())) {
        jugador.perderEnergia(1);
      }

      mostrarStats(jugador, puntos);

      if (puntos >= MAX_PUNTOS) {
        mostrarGanaste();
        game_over = true;
      } else if (jugador.getVidas() <= 0 || jugador.getEnergia() <= 0) {
        mostrarGameOver();
        game_over = true;
      }

      refresh();
      napms(80);
    }

  } while (seguirJugando);

  endwin();
  return 0;
}

void mostrarStats(Jugador &jugador, int puntos) {
  mvprintw(1, 2, "ENERGIA:");
  for (int i = 0; i < jugador.getEnergia(); i++)
    addch(ACS_CKBOARD);

  mvprintw(1, 20, "VIDAS: ");
  for (int i = 0; i < jugador.getVidas(); i++)
    addch(ACS_DIAMOND);

  mvprintw(1, 40, "PUNTOS: %d", puntos);

  // Mostrar tiempo de disparo restante
  if (jugador.tieneDisparoActivo()) {
    int tiempoRestante = jugador.getTiempoDisparoRestante();
    mvprintw(1, 60, "SUELDO: %d seg", tiempoRestante);
  } else {
    mvprintw(1, 60, "SUELDO: INACTIVO    ");
  }
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