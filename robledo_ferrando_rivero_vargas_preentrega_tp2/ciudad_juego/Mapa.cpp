#include "Mapa.h"
#include "Constantes.h"
#include <ncurses.h>
Mapa::Mapa() {
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

  for (int y = 0; y < ALTO; ++y) {
    for (int x = 0; x < ANCHO; ++x) {
      mapa[y][x] = datos[y][x];
    }
  }
}

void Mapa::inicializar_colores() {
  start_color();
  init_pair(PAR_CALLE, COLOR_YELLOW, COLOR_YELLOW);
  init_pair(PAR_SOMBRA, COLOR_BLUE, COLOR_BLACK);
  init_pair(PAR_EDIFICIO, COLOR_RED, COLOR_BLACK);
  init_pair(PAR_EDIFICIO1, COLOR_RED, COLOR_BLACK);
  init_pair(PAR_REDONDEL, COLOR_CYAN, COLOR_MAGENTA);
  init_pair(PAR_PORTAL, COLOR_GREEN, COLOR_BLACK);
  init_pair(PAR_PREMIO, COLOR_YELLOW, COLOR_BLACK);
}

char **Mapa::getMatriz() {
  // convertimos mapa[ALTO][ANCHO] en char**
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
}