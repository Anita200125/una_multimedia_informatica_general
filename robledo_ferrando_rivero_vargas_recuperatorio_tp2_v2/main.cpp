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

/*
 * MAQUINA DE ESTADOS DEL JUEGO
 * Define los diferentes modos o pantallas por los que puede pasar el juego
 * MENU_PRINCIPAL: Pantalla inicial con opciones
 * JUGANDO: Donde transcurre la partida
 * GAME_OVER: Pantalla de fin de juego por perder
 * GANASTE: Pantalla de victoria
 * SALIR: Estado para terminar la aplicación
 */
enum EstadoJuego { MENU_PRINCIPAL, JUGANDO, GAME_OVER, GANASTE, SALIR };

// Declaraciones de funciones
void mostrarStats(Jugador &jugador, int puntos);
EstadoJuego mostrarMenu();
EstadoJuego jugarPartida();
EstadoJuego mostrarPantallaGameOver();
EstadoJuego mostrarPantallaGanaste();

int main() {
  // INICIALIZACION DE NCURSES
  initscr();            // Inicia el modo ncurses
  noecho();             // No muestra las teclas presionadas
  curs_set(0);          // Hace invisible el cursor
  keypad(stdscr, TRUE); // Habilita teclas especiales (F1, flechas, etc.)

  // VALIDACION DE TAMAÑO DE TERMINAL
  // Verifica que la terminal tenga las dimensiones mínimas requeridas
  if (LINES < ALTO || COLS < ANCHO) {
    endwin();
    printf("La terminal tiene que tener como mínimo %dx%d\n\n", ANCHO, ALTO);
    return 1;
  }

  // CONFIGURACIONES INICIALES
  srand(time(NULL));                         // Semilla para números aleatorios
  EstadoJuego estadoActual = MENU_PRINCIPAL; // Estado inicial del juego

  /*
   * BUCLE PRINCIPAL DE LA MAQUINA DE ESTADOS
   * Este while controla la transición entre todas las pantallas del juego
   * Cada estado devuelve el siguiente estado a ejecutar
   */
  while (estadoActual != SALIR) {
    switch (estadoActual) {
    case MENU_PRINCIPAL:
      estadoActual = mostrarMenu();
      break;
    case JUGANDO:
      estadoActual = jugarPartida();
      break;
    case GAME_OVER:
      estadoActual = mostrarPantallaGameOver();
      break;
    case GANASTE:
      estadoActual = mostrarPantallaGanaste();
      break;
    }
  }

  // FINALIZACION CORRECTA
  endwin(); // Termina el modo ncurses y restaura la terminal
  return 0;
}

/*
 * FUNCION: mostrarMenu()
 * OBJETIVO: Mostrar el menú principal y capturar la selección del usuario
 * RETORNO: Siguiente estado del juego (JUGANDO o SALIR)
 */
EstadoJuego mostrarMenu() {
  clear(); // Limpia la pantalla

  // TITULO Y DESCRIPCION DEL JUEGO - Requerido para la nota
  mvprintw(ALTO / 2 - 3, ANCHO / 2 - 10, "=== COMO UN DIA CUALQUIERA ===");
  mvprintw(ALTO / 2 - 1, ANCHO / 2 - 15,
           "Esquiva las deudas, alcanza el sueldo!");

  // OPCIONES DEL MENU
  mvprintw(ALTO / 2 + 1, ANCHO / 2 - 5, "1. Jugar");
  mvprintw(ALTO / 2 + 2, ANCHO / 2 - 5, "2. Salir");
  mvprintw(ALTO / 2 + 4, ANCHO / 2 - 10, "Selecciona una opcion (1-2): ");

  refresh();

  /*
   * CAPTURA DE TECLA EN MODO BLOQUEANTE
   * nodelay(stdscr, FALSE) hace que getch() espere hasta que se presione una
   * tecla Esto es requerido por las correcciones del TP
   */
  nodelay(stdscr, FALSE); // Modo bloqueante para menús
  int opcion = getch();
  nodelay(stdscr, TRUE); // Vuelve al modo no bloqueante para el juego

  // CONVERSION Y VALIDACION DE OPCION
  opcion = opcion - '0'; // Convierte carácter ASCII a número

  switch (opcion) {
  case 1:
    return JUGANDO; // Inicia una partida
  case 2:
    return SALIR; // Termina la aplicación
  default:
    // OPCIÓN INVÁLIDA - Permite corregir la selección
    mvprintw(ALTO / 2 + 6, ANCHO / 2 - 15,
             "Opcion invalida! Presiona cualquier tecla...");
    refresh();
    getch();
    return MENU_PRINCIPAL; // Vuelve al menú
  }
}

/*
 * FUNCION: jugarPartida()
 * OBJETIVO: Contener toda la lógica del juego durante la partida
 * RETORNO: Siguiente estado (GAME_OVER, GANASTE o MENU_PRINCIPAL)
 *
 * Esta función contiene tu código original del juego reorganizado
 */
EstadoJuego jugarPartida() {
  // INICIALIZACION DE VARIABLES DE LA PARTIDA
  int puntos = 0;
  const int MAX_PUNTOS = 20;

  Jugador jugador(ANCHO / 2, ALTO - 3);
  jugador.setEnergia(3);
  jugador.setVidas(3);

  Estatus estatus(rand() % 110, 1);
  Mapa mapa;
  mapa.inicializar_colores();

  vector<Deuda> deudas;
  deudas.push_back(Deuda(rand() % (ANCHO - 7), 1));

  // BUCLE PRINCIPAL DEL JUEGO
  while (true) {
    erase();
    box(stdscr, 0, 0);
    mapa.dibujar();

    int tecla = getch();

    // TECLA ESCAPE - Vuelve al menú principal (corrección solicitada)
    if (tecla == 27) {
      return MENU_PRINCIPAL;
    }

    // CONTROLES DEL JUGADOR
    if (jugador.puedeMoverse()) {
      jugador.mover(tecla, mapa.getMatriz());
    }

    if (tecla == ' ' && jugador.tieneDisparoActivo()) {
      jugador.disparar();
    }

    // DETECCION DE PREMIOS
    char celda = mapa.getMatriz()[jugador.getY()][jugador.getX()];
    if (celda == PREMIO && !jugador.tieneDisparoActivo()) {
      jugador.activarDisparo();
    }

    // ACTUALIZACION Y RENDERIZADO DE OBJETOS
    estatus.update();
    estatus.draw();
    jugador.actualizarEstado();
    jugador.draw();

    for (auto &d : deudas) {
      d.update();
      d.draw();
    }

    // SISTEMA DE COLISIONES - Disparos vs Deudas
    for (auto &d : deudas) {
      for (auto &disp : jugador.getDisparos()) {
        if (disp.estaActivo() && d.colisionaCon(disp.getX(), disp.getY())) {
          disp.desactivar();
          puntos++;

          d.setY(1);
          d.setX(rand() % (ANCHO - d.getAncho()));

          int nuevaVel = max(1, 6 - puntos);
          d.setVelocidad(nuevaVel);

          // Aumenta dificultad - cada 3 puntos agrega nueva deuda
          if (puntos % 3 == 0 && deudas.size() < 8) {
            deudas.push_back(Deuda(rand() % (ANCHO - 7), 1));
          }
        }
      }
    }

    // 2. Colisiones jugador vs deudas (aquí se pierden vidas)
    for (auto &d : deudas) {
      if (d.colisionaCon(jugador.getX(), jugador.getY())) {
        jugador.setVidas(jugador.getVidas() - 1); // ¡Pierde vida!
        jugador.caer();

        d.setY(1);
        d.setX(rand() % (ANCHO - d.getAncho()));
        d.setVelocidad(8);
      }
    }

    // 3. Colisión jugador vs estatus (aquí se pierde energía)
    if (estatus.colisionaCon(jugador.getX(), jugador.getY())) {
      jugador.perderEnergia(1); // ¡Pierde energía!
    }

    // VERIFICACION DE CONDICIONES DE TERMINO
    if (puntos >= MAX_PUNTOS) {
      return GANASTE; // Condición de victoria
    } else if (jugador.getVidas() <= 0 || jugador.getEnergia() <= 0) {
      return GAME_OVER; // Condición de derrota
    }

    mostrarStats(jugador, puntos);
    refresh();
    napms(80); // Control de FPS - pausa de 80 milisegundos
  }
}

/*
 * FUNCION: mostrarPantallaGameOver()
 * OBJETIVO: Mostrar pantalla de fin de juego y opciones
 * RETORNO: MENU_PRINCIPAL o SALIR
 *
 * CORRECCION IMPLEMENTADA: La opción "No" ahora vuelve al menú en lugar de
 * salir
 */
EstadoJuego mostrarPantallaGameOver() {
  clear();

  // MENSAJE RETORICO SOBRE LA DEUDA - Para mejorar la impronta del juego
  mvprintw(ALTO / 2 - 2, ANCHO / 2 - 25,
           "Lamento que tus deudas te hyan abatido");
  mvprintw(ALTO / 2, ANCHO / 2 - 5, "GAME OVER");
  mvprintw(ALTO / 2 + 2, ANCHO / 2 - 12, "¿Que deseas hacer?");
  mvprintw(ALTO / 2 + 3, ANCHO / 2 - 8, "1. Volver al Menu");
  mvprintw(ALTO / 2 + 4, ANCHO / 2 - 8, "2. Salir del Juego");

  refresh();

  // MODO BLOQUEANTE - Espera explícita por tecla
  nodelay(stdscr, FALSE);
  int opcion = getch();
  nodelay(stdscr, TRUE);

  opcion = opcion - '0';

  switch (opcion) {
  case 1:
    return MENU_PRINCIPAL; // CORRECCION: "No" vuelve al menú
  case 2:
    return SALIR;
  default:
    return MENU_PRINCIPAL; // Por defecto vuelve al menú
  }
}

/*
 * FUNCION: mostrarPantallaGanaste()
 * OBJETIVO: Mostrar pantalla de victoria y opciones
 * RETORNO: MENU_PRINCIPAL o SALIR
 */
EstadoJuego mostrarPantallaGanaste() {
  clear();

  mvprintw(ALTO / 2 - 1, ANCHO / 2 - 4, "¡GANASTE!");
  mvprintw(ALTO / 2 + 1, ANCHO / 2 - 12, "¿Que deseas hacer?");
  mvprintw(ALTO / 2 + 2, ANCHO / 2 - 8, "1. Volver al Menu");
  mvprintw(ALTO / 2 + 3, ANCHO / 2 - 8, "2. Salir del Juego");

  refresh();

  nodelay(stdscr, FALSE);
  int opcion = getch();
  nodelay(stdscr, TRUE);

  opcion = opcion - '0';

  switch (opcion) {
  case 1:
    return MENU_PRINCIPAL;
  case 2:
    return SALIR;
  default:
    return MENU_PRINCIPAL;
  }
}

// FUNCION ORIGINAL MANTENIDA - Muestra estadísticas durante el juego
void mostrarStats(Jugador &jugador, int puntos) {
  mvprintw(1, 2, "ENERGIA:");
  for (int i = 0; i < jugador.getEnergia(); i++)
    addch(ACS_CKBOARD);

  mvprintw(1, 20, "VIDAS: ");
  for (int i = 0; i < jugador.getVidas(); i++)
    addch(ACS_DIAMOND);

  mvprintw(1, 40, "PUNTOS: %d", puntos);

  if (jugador.tieneDisparoActivo()) {
    int tiempoRestante = jugador.getTiempoDisparoRestante();
    mvprintw(1, 60, "SUELDO: %d seg", tiempoRestante);
  } else {
    mvprintw(1, 60, "SUELDO: INACTIVO    ");
  }
}