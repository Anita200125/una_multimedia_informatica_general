#include "Deuda.h"
#include "Constantes.h"
#include <algorithm>
#include <ncurses.h>

Deuda::Deuda(int xInicial, int yInicial) {
  x = xInicial;
  y = yInicial;
  texto = "#DEUDA";
  velocidad = 5;
  tick = 0;
}

int Deuda::getX() const { return x; }
int Deuda::getY() const { return y; }

int Deuda::getAncho() { return texto.length(); }

void Deuda::setX(int nuevoX) { x = nuevoX; }
void Deuda::setY(int nuevoY) { y = nuevoY; }

void Deuda::setVelocidad(int v) { velocidad = v; }
int Deuda::getVelocidad() const { return velocidad; }

void Deuda::update() {
  tick++;
  if (tick >= velocidad) {
    y++;
    tick = 0;
  }

  if (y > ALTO) {
    y = 1;

    int maxX = std::max(1, ANCHO - 2 - (int)texto.length());
    x = 1 + (rand() % maxX);
  }
}

void Deuda::draw() { mvprintw(y, x, "%s", texto.c_str()); }

bool Deuda::colisionaCon(int jugadorX, int jugadorY) {
  return (jugadorY == y && jugadorX >= x && jugadorX < x + texto.length());
}