#pragma once
#include "Constantes.h"

class Mapa {
private:
  char mapa[ALTO][ANCHO];

public:
  Mapa();
  void dibujar();
  void inicializar_colores();
  char **getMatriz(); 
};