#include "Jugador.h"
#include "Constantes.h"

#include <algorithm>
#include <ncurses.h>

Jugador::Jugador(int startX, int startY) {
  x = startX;
  y = startY;
  vidas = 3;
  energia = 10;
  estaCaido = false;
  tiempoCaido = 0;
  frameAnimacion = 0;
  disparoActivo = false;
}

bool Jugador::puedeMoverseA(int nuevaX, int nuevaY, char **mapa) {
  if (nuevaX < 1 || nuevaX >= ANCHO - 2 || nuevaY < 1 || nuevaY >= ALTO - 2)
    return false;

  return (mapa[nuevaY][nuevaX] != '#' && mapa[nuevaY][nuevaX] != '=');
}

void Jugador::activarDisparo() { disparoActivo = true; }

bool Jugador::tieneDisparoActivo() const { return disparoActivo; }

void Jugador::disparar() {
  if (disparoActivo) {
    if (y > 2) {
      disparos.push_back(Disparo(x + 1, y - 1)); // Desde el centro de la cabeza
    }
  }
}
std::vector<Disparo> &Jugador::getDisparos() { return disparos; }

int Jugador::getX() { return x; }
int Jugador::getY() { return y; }
void Jugador::setX(int newX) { x = newX; }
void Jugador::setY(int newY) { y = newY; }

int Jugador::getVidas() { return vidas; }
void Jugador::setVidas(int v) { vidas = v; }
int Jugador::getEnergia() { return energia; }
void Jugador::setEnergia(int e) { energia = e; }

void Jugador::perderEnergia(int cantidad) {
  energia -= cantidad;
  if (energia < 0)
    energia = 0;
}

void Jugador::mover(int tecla, char **mapa) {
  if (!puedeMoverse())
    return;

  int nuevaX = x;
  int nuevaY = y;

  switch (tecla) {
  case KEY_UP:
    nuevaY--;
    break;
  case KEY_DOWN:
    nuevaY++;
    break;
  case KEY_LEFT:
    nuevaX--;
    break;
  case KEY_RIGHT:
    nuevaX++;
    break;
  }

  if (puedeMoverseA(nuevaX, nuevaY, mapa)) {
    x = nuevaX;
    y = nuevaY;
  }
}

void Jugador::caer() {
  if (vidas > 0) {
    estaCaido = true;
    tiempoCaido = 0;
    frameAnimacion = 0;
  }
}

void Jugador::actualizarEstado() {
  if (estaCaido) {
    tiempoCaido++;
    frameAnimacion++;
    if (tiempoCaido > 30)
      estaCaido = false;
  }

  // Actualizar disparos (mueven hacia arriba y se eliminan si salen de
  // pantalla)
  for (auto &d : disparos) {
    d.update();
  }

  disparos.erase(
      std::remove_if(disparos.begin(), disparos.end(),
                     [](const Disparo &d) { return !d.estaActivo(); }),
      disparos.end());
}

bool Jugador::puedeMoverse() const { return !estaCaido; }

void Jugador::draw() const {
  // Dibujar sprite según estado
  if (estaCaido) {
    switch (frameAnimacion % 4) {
    case 0:
      mvaddch(y, x, '@');
      mvaddch(y + 1, x, '_');
      mvaddch(y + 1, x + 1, '=');
      mvaddch(y + 1, x + 2, '=');
      break;
    case 1:
      mvaddch(y, x, '@');
      mvaddch(y + 1, x, '/');
      mvaddch(y + 1, x + 1, '_');
      mvaddch(y + 1, x + 2, '=');
      mvaddch(y + 1, x + 3, '=');
      break;
    case 2:
      mvaddch(y, x, '@');
      mvaddch(y + 1, x, '/');
      mvaddch(y + 1, x + 1, '_');
      mvaddch(y + 1, x + 2, '=');
      break;
    case 3:
      mvaddch(y, x, '@');
      mvaddch(y + 1, x, '/');
      mvaddch(y + 1, x + 1, '_');
      mvaddch(y + 1, x + 2, '=');
      mvaddch(y + 1, x + 3, '=');
      break;
    }
  } else if (disparoActivo) {
    // Sprite con disparo
    mvaddch(y, x, '\\');
    mvaddch(y, x + 1, '@');
    mvaddch(y + 1, x + 1, '|');
    mvaddch(y + 1, x + 2, '\\');
    mvaddch(y + 2, x, '/');
    mvaddch(y + 2, x + 1, '|');
  } else {
    // Sprite normal
    mvaddch(y, x, '@');
    mvaddch(y + 1, x + 1, '/');
    mvaddch(y + 1, x, '/');
    mvaddch(y + 2, x, '/');
    mvaddch(y + 2, x + 1, '|');
  }

  // Dibujar disparos activos
  for (const auto &d : disparos) {
    d.draw();
  }
}