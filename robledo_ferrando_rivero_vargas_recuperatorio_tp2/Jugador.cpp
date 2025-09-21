#include "Jugador.h"
#include "Constantes.h"
#include <algorithm>
#include <ctime>
#include <ncurses.h>

// Constructor - Inicializa con dirección por defecto (DERECHA)
Jugador::Jugador(int startX, int startY) {
  x = startX;
  y = startY;
  direccion = DERECHA;
  vidas = 3;
  energia = 10;
  estaCaido = false;
  tiempoCaido = 0;
  frameAnimacion = 0;
  disparoActivo = false;
  tiempoFinDisparo = 0;
}

bool Jugador::puedeMoverseA(int nuevaX, int nuevaY, char **mapa) {
  if (nuevaX < 1 || nuevaX >= ANCHO - 2 || nuevaY < 1 || nuevaY >= ALTO - 2)
    return false;

  return (mapa[nuevaY][nuevaX] != '#' && mapa[nuevaY][nuevaX] != '=');
}

// MOVER - ÚNICA DEFINICIÓN (usando enum Direccion)
void Jugador::mover(int tecla, char **mapa) {
  if (!puedeMoverse())
    return;

  int nuevaX = x;
  int nuevaY = y;

  // Usar el enum para mayor claridad
  switch (tecla) {
  case KEY_UP:
    direccion = ARRIBA;
    nuevaY--;
    break;
  case KEY_DOWN:
    direccion = ABAJO;
    nuevaY++;
    break;
  case KEY_LEFT:
    direccion = IZQUIERDA;
    nuevaX--;
    break;
  case KEY_RIGHT:
    direccion = DERECHA;
    nuevaX++;
    break;
  }

  // ⚡ Ajuste de límites para el sprite
  nuevaX = std::max(1, std::min(ANCHO - 3, nuevaX));
  nuevaY = std::max(1, std::min(ALTO - 3, nuevaY));

  if (puedeMoverseA(nuevaX, nuevaY, mapa)) {
    x = nuevaX;
    y = nuevaY;
  }
}

void Jugador::activarDisparo() {
  disparoActivo = true;
  tiempoFinDisparo = std::time(nullptr) + 20;
}

void Jugador::desactivarDisparo() {
  disparoActivo = false;
  tiempoFinDisparo = 0;
}

bool Jugador::tieneDisparoActivo() const { return disparoActivo; }

int Jugador::getTiempoDisparoRestante() const {
  if (!disparoActivo)
    return 0;
  int tiempoRestante = tiempoFinDisparo - std::time(nullptr);
  return tiempoRestante > 0 ? tiempoRestante : 0;
}

void Jugador::disparar() {
  if (disparoActivo) {
    if (y > 2) {
      disparos.push_back(Disparo(x + 1, y - 1));
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

  // Verificar si el tiempo de disparo ha expirado
  if (disparoActivo && std::time(nullptr) >= tiempoFinDisparo) {
    desactivarDisparo();
  }

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
    mvaddch(y, x, '\\');
    mvaddch(y, x + 1, '@');
    mvaddch(y + 1, x + 1, '|');
    mvaddch(y + 1, x + 2, '\\');
    mvaddch(y + 2, x, '/');
    mvaddch(y + 2, x + 1, '|');
  } else {
    mvaddch(y, x, '@');
    mvaddch(y + 1, x + 1, '/');
    mvaddch(y + 1, x, '/');
    mvaddch(y + 2, x, '/');
    mvaddch(y + 2, x + 1, '|');
  }

  for (const auto &d : disparos) {
    d.draw();
  }
}