#include "Deuda.h"
#include "Constantes.h"
#include <cstdlib>
#include <ncurses.h>

Deuda::Deuda(int xInicial, int yInicial) {
  x = xInicial;
  y = yInicial;
  texto = "#DEUDAS";
  velocidad = 2; // 👈 arranca despacio (más grande = más lento)
  tick = 0;
}

int Deuda::getX() const { return x; }
int Deuda::getY() const { return y; }
int Deuda::getAncho() { return texto.length(); }

void Deuda::setX(int nuevoX) { x = nuevoX; }
void Deuda::setY(int nuevoY) { y = nuevoY; }

void Deuda::draw() { mvprintw(y, x, "%s", texto.c_str()); }

void Deuda::update() {
  tick++;
  if (tick >= velocidad) {
    y++;
    tick = 0;
  }

  if (y > ALTO - 2) {
    y = 1;
    x = rand() % (ANCHO - 2 - texto.length());
  }
}

bool Deuda::colisionaCon(int jugadorX, int jugadorY) {
  return (jugadorY == y && jugadorX >= x && jugadorX < x + texto.length());
}

void Deuda::setVelocidad(int v) { velocidad = v; }
int Deuda::getVelocidad() const { return velocidad; }