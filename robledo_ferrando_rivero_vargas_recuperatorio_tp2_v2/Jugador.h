#pragma once

#include "Constantes.h"
#include "Disparo.h"
#include <ctime> // Para time_t
#include <vector>

class Jugador {
private:
  int x, y;
  Direccion direccion;
  int vidas, energia;
  bool estaCaido;
  int tiempoCaido;
  int frameAnimacion;

  // Sistema de disparos
  bool disparoActivo;
  std::time_t tiempoFinDisparo; // Momento en que se desactiva el disparo
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

  // Sistema de disparos temporales
  void activarDisparo();
  void desactivarDisparo();
  bool tieneDisparoActivo() const;
  int getTiempoDisparoRestante() const; // Nuevo método para tiempo restante
  void disparar();
  std::vector<Disparo> &getDisparos();

  // Dibujo
  void draw() const;
};