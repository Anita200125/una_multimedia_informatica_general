#pragma once
#include <string>

class Deuda {
private:
  int x;
  int y;
  std::string texto;

public:
  Deuda(int xInicial, int yInicial);

  int getX() const;
  int getY() const;
  int getAncho();

  void setX(int nuevoX);
  void setY(int nuevoY);

  void update();
  void draw();

  bool colisionaCon(int jugadorX, int jugadorY);
};
