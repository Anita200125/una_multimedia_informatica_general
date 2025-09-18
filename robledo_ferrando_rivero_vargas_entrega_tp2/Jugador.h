#pragma once

#include "Constantes.h"
#include "Disparo.h"
#include <vector>

class Jugador {
private:
  int x, y;
  int vidas, energia;
  bool estaCaido;
  int tiempoCaido;
  int frameAnimacion;

  // Disparo manual
  bool disparoActivo;
  std::vector<Disparo> disparos;

public:
  // Constructor
  Jugador(int startX, int startY);

  // Movimiento
  bool puedeMoverseA(int nuevaX, int nuevaY, char **mapa);
  void mover(int tecla, char **mapa);
  bool puedeMoverse() const;

  // Posición
  int getX();
  int getY();
  void setX(int newX);
  void setY(int newY);

  // Estado
  int getVidas();
  void setVidas(int v);
  int getEnergia();
  void setEnergia(int e);
  void perderEnergia(int cantidad);
  void caer();
  void actualizarEstado();

  // Dibujo
  void draw() const;

  // Disparo
  void activarDisparo(); // Activa modo disparo al tocar PREMIO
  bool tieneDisparoActivo() const;
  void disparar();                     // Crea un nuevo disparo
  std::vector<Disparo> &getDisparos(); // Acceso a los disparos
};