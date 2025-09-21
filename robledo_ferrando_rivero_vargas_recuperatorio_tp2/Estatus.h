#pragma once
#include <string>

class Estatus {
private:
  int x;
  int y;
  std::string texto;
  bool estaCaido;
  int tiempoCaido;
  int frameAnimacion;

public:
  Estatus(int xInicial, int yInicial);

  int getX() const;
  int getY() const;
  int getAncho();

  void setX(int nuevoX);
  void setY(int nuevoY);

  void update();
  void draw();

  bool colisionaCon(int jugadorX, int jugadorY);
};