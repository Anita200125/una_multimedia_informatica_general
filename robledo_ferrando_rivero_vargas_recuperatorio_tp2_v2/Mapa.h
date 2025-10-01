#pragma once

#include "Cartel.h" // Incluir la nueva clase
#include "Constantes.h"

class Mapa {
private:
  char mapa[ALTO][ANCHO];
  Cartel *cartelTrabajo; // Usaremos un puntero para mayor flexibilidad

public:
  Mapa();
  ~Mapa(); // Necesitamos destructor por el puntero
  void inicializar_colores();
  char **getMatriz();
  void dibujar();
};