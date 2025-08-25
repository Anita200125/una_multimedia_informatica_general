#include "Deuda.h"
#include <cstdlib>
#include <ncurses.h>

Deuda::Deuda(int xInicial, int yInicial) {
  x = xInicial;
  y = yInicial;
  texto = "#DEUDAS";
}

int Deuda::getX() const { return x; }
int Deuda::getY() const { return y; }

int Deuda::getAncho() { return texto.length(); }

void Deuda::setX(int nuevoX) { x = nuevoX; }
void Deuda::setY(int nuevoY) { y = nuevoY; }

void Deuda::draw() { mvprintw(y, x, "%s", texto.c_str()); }

void Deuda::update() {
  y++;
  if (y > 38) {
    y = 1;
    x = rand() % (118 - texto.length());
  }
}

bool Deuda::colisionaCon(int jugadorX, int jugadorY) {
  return (jugadorY == y && jugadorX >= x && jugadorX < x + texto.length());
}