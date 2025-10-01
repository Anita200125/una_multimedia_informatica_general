#include "Mapa.h"
#include "Constantes.h"
#include <ncurses.h>
#include <string>

// Constructor
Mapa::Mapa() {
  // Inicializar el cartel
  cartelTrabajo = new Cartel("TRABAJO", 81, 20, COLOR_MAGENTA, COLOR_WHITE);

  const char *datos[ALTO] = {

      "                                                                       "
      " "
      "                                             ",
      "                                                                        "
      " "
      "                                            ",
      "                                                                        "
      "  "
      "                                            ",
      "                                                                        "
      "  "
      "                                           ",
      "                                                                        "
      "  "
      "          #################                ",
      "                                                                        "
      " "
      "           # 0  0  0  0  0 #                ",
      "                        ###############                                 "
      "          ======================             ",
      "                        ###############                                 "
      "          ======================             ",
      "                        ##   ##  ##  ##                                 "
      "          ===   ====   ===   ===             ",
      "                        ##   ##  ##  ##                                 "
      "          ===   ====   ===  p ===             ",
      "                        ###############                                 "
      "           ........................          ",
      "                        ##   ##  ##  ##                                 "
      "              ........................       ",
      "                        ##   ##  ##  ##                                 "
      "                 ......................      ",
      "                        ###############                                 "
      "                                             ",
      "                        ##   ##  ##  ##                                 "
      "                                             ",
      "                        ##   ##  ##  ##                                 "
      "           #                                 ",
      "                        ###############                                 "
      "  "
      "        #^#                                ",
      "                       #####       #####                                "
      "  "
      "       # 0 #                               ",
      "                       #####       #####                                "
      "  "
      "       # 0 #                               ",
      "                       #####       #####                                "
      "  "
      " "
      "  ############                             ",
      "                         ...............                                "
      " "
      "    ##   ##   ##                            ",
      "                            .................                           "
      "  "
      "   ##   ##   ##                            ",
      "                                ...............                         "
      "  "
      "   ############                            ",
      "                                  ..............                        "
      "  "
      "   ##   ##   ##                            ",
      "                                    ..............                      "
      "  "
      "   ##   ##   ##                            ",
      "                                     ..............                     "
      "  "
      "   ############                            ",
      "                                                                      "
      "########   ##   ########                       ",
      "                                                                      "
      "########   ## * ########                       ",
      "                                                                       "
      "..........................                    ",
      "                                                                        "
      "  "
      "........................                   ",
      "                                                                        "
      "  "
      "  .......................                  ",
      "                                                                        "
      "  "
      "    ......................                 ",
      "                                                                        "
      "  "
      "           .............                   ",
      "                                                                        "
      "  "
      "               ..........                  ",
      "                                                                        "
      "  "
      "                       .                   ",
      "                                                                        "
      "  "
      "                         .                 ",
      "                                                                        "
      "  "
      "                                           ",
      "                                                                        "
      "  "
      "                                           ",
  };

  // Inicializar todo el mapa con espacios
  for (int y = 0; y < ALTO; y++) {
    for (int x = 0; x < ANCHO; x++) {
      mapa[y][x] = ' ';
    }
  }

  // Copiar los datos, sin pasarse de ANCHO
  for (int y = 0; y < ALTO; ++y) {
    for (int x = 0; datos[y][x] != '\0' && x < ANCHO; ++x) {
      mapa[y][x] = datos[y][x];
    }
  }
}

// Destructor
// Destructor - Se ejecuta automáticamente cuando el objeto Mapa se destruye
// Su propósito es liberar los recursos asignados dinámicamente para evitar
// fugas de memoria
Mapa::~Mapa() {
  delete cartelTrabajo;
} // Libera la memoria del cartel creado con 'new'

void Mapa::inicializar_colores() {
  start_color();
  use_default_colors();
  init_pair(PAR_CALLE, COLOR_YELLOW, COLOR_YELLOW);
  init_pair(PAR_SOMBRA, COLOR_BLUE, COLOR_BLACK);
  init_pair(PAR_EDIFICIO, COLOR_RED, COLOR_BLACK);
  init_pair(PAR_EDIFICIO1, COLOR_RED, COLOR_BLACK);
  init_pair(PAR_REDONDEL, COLOR_CYAN, COLOR_MAGENTA);
  init_pair(PAR_PORTAL, COLOR_GREEN, COLOR_BLACK);
  init_pair(PAR_PREMIO, COLOR_YELLOW, COLOR_BLACK);
}

char **Mapa::getMatriz() {
  static char *matrizPtr[ALTO];
  for (int i = 0; i < ALTO; i++) {
    matrizPtr[i] = mapa[i];
  }
  return matrizPtr;
}

void Mapa::dibujar() {
  for (int y = 0; y < ALTO; y++) {
    for (int x = 0; x < ANCHO; x++) {
      char c = mapa[y][x];
      int color = PAR_CALLE;

      switch (c) {
      case SOMBRA:
        color = PAR_SOMBRA;
        break;
      case EDIFICIO:
        color = PAR_EDIFICIO;
        break;
      case EDIFICIO1:
        color = PAR_EDIFICIO1;
        break;
      case REDONDEL:
        color = PAR_REDONDEL;
        break;
      case PORTAL:
        color = PAR_PORTAL;
        break;
      case PREMIO:
        color = PAR_PREMIO;
        break;
      default:
        color = PAR_CALLE;
        break;
      }

      attron(COLOR_PAIR(color));
      mvaddch(y + MARGEN, x + MARGEN, c);
      attroff(COLOR_PAIR(color));
    }
  }

  // Dibujar el cartel después del mapa
  cartelTrabajo->dibujar();
}