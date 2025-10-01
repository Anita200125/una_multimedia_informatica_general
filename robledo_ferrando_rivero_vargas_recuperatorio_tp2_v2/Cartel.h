#pragma once
#include <string>

class Cartel {
private:
  std::string texto;
  int x, y;
  int color_texto;
  int color_fondo;
  int par_colores;

public:
  Cartel(std::string texto, int x, int y, int color_texto, int color_fondo);
  void dibujar();
  void setPosicion(int nuevo_x, int nuevo_y);
  void setTexto(std::string nuevo_texto);
  void setColores(int nuevo_color_texto, int nuevo_color_fondo);
};