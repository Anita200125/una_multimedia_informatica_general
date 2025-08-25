#pragma once
#include "Constantes.h"

class Disparo {
private:
  int x;
  int y;
  bool activo;

public:
  // Constructor: recibe posición inicial del disparo
  Disparo(int startX, int startY);

  // Actualiza la posición del disparo (va hacia arriba)
  void update();

  // Dibuja el disparo en pantalla
  void draw() const;

  // Devuelve si el disparo sigue activo
  bool estaActivo() const;

  // Marca el disparo como inactivo (ej: tras colisión)
  void desactivar();

  // Posición actual del disparo
  int getX() const;
  int getY() const;
};