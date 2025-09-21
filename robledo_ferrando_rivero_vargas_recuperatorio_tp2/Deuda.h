#pragma once
#include <string>

class Deuda {
private:
  int x;
  int y;
  std::string texto;

  int velocidad; // 👈 cada cuántos ticks baja una fila
  int tick;      // 👈 contador de frames

public:
  Deuda(int xInicial, int yInicial);

  int getX() const;
  int getY() const;
  int getAncho();

  void setX(int nuevoX);
  void setY(int nuevoY);

  void setVelocidad(int v); 
  int getVelocidad() const; 

  void update();
  void draw();

  bool colisionaCon(int jugadorX, int jugadorY);
};
