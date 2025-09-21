#pragma once

enum Direccion { ARRIBA, ABAJO, IZQUIERDA, DERECHA };

enum TipoCelda {
  CELDA_CALLE,
  CELDA_PARED,
  CELDA_PREMIO,
  CELDA_PORTAL,
  CELDA_ENEMIGO,
  CELDA_EDIFICIO,
  CELDA_SOMBRA
};

/////////////TAMAÑO DE LA CIUDAD/////////////

const int ANCHO = 117;
const int ALTO = 38;
const int MARGEN = 1;
const int DELAY = 30;

/////////////COLORES DE LA CIUDAD/////////////

const int PAR_EDIFICIO = 1;
const int PAR_EDIFICIO1 = 2;
const int PAR_SOMBRA = 3;
const int PAR_CALLE = 4;
const int PAR_REDONDEL = 5;
const int PAR_PORTAL = 6;
const int PAR_PREMIO = 7;
const int PAR_CARTEL = 8;

/////////////CARACTERES PARA LA CONSTRUCCIÓN DE LA CIUDAD/////////////

const char CALLE = ' ';
const char SOMBRA = '.';
const char EDIFICIO = '#';
const char EDIFICIO1 = '=';
const char PORTAL = 'P';
const char PREMIO = '*';
const char REDONDEL = '0';
