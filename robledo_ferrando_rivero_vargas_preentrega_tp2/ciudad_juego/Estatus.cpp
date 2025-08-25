#include "Estatus.h"
#include <cstdlib>
#include <ncurses.h>

Estatus::Estatus(int xInicial, int yInicial) {
  x = xInicial;
  y = yInicial;
  texto = "#ESTATUS";
}

int Estatus::getX() const { return x; }
int Estatus::getY() const { return y; }

int Estatus::getAncho() { return texto.length(); }

void Estatus::setX(int nuevoX) { x = nuevoX; }
void Estatus::setY(int nuevoY) { y = nuevoY; }

void Estatus::draw() {
  mvprintw(y, x, "%s", texto.c_str());
  attron(COLOR_PAIR(5));
  mvprintw(y, x, "%s", texto.c_str());
  attroff(COLOR_PAIR(1));
}

void Estatus::update() {
  y++;
  if (y > 38) {
    y = 1;
    x = rand() % (118 - texto.length());
  }
}

bool Estatus::colisionaCon(int jugadorX, int jugadorY) {
  return (jugadorY == y && jugadorX >= x && jugadorX < x + texto.length());
}