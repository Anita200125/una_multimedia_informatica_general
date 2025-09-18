#include "Disparo.h"
#include <ncurses.h>

Disparo::Disparo(int startX, int startY) {
  x = startX;
  y = startY;
  activo = true;
}

void Disparo::update() {
  if (!activo)
    return;

  y--; // El disparo se mueve hacia arriba

  if (y < 0) {
    activo = false; // Se desactiva si sale de pantalla
  }
}

void Disparo::draw() const {
  if (activo) {
    mvaddch(y, x, '$');
  }
}

bool Disparo::estaActivo() const { return activo; }

void Disparo::desactivar() { activo = false; }

int Disparo::getX() const { return x; }

int Disparo::getY() const { return y; }