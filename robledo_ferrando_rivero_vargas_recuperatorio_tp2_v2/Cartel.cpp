#include "Cartel.h"
#include <ncurses.h> // Añadir esta inclusión
#include <string>

// Constructor
Cartel::Cartel(std::string texto, int x, int y, int color_texto,
               int color_fondo)
    : texto(texto), x(x), y(y), color_texto(color_texto),
      color_fondo(color_fondo) {
  this->par_colores = 10; // Usamos un número alto para evitar conflictos
}

void Cartel::dibujar() {
  // Inicializar el par de colores (solo si ncurses está inicializado)
  if (has_colors()) {
    init_pair(this->par_colores, color_texto, color_fondo);
  }

  // Activar los colores del cartel
  attron(COLOR_PAIR(this->par_colores));

  // Dibujar el fondo del cartel
  for (int i = 0; i < texto.length(); i++) {
    mvaddch(y, x + i, ' ' | A_REVERSE); // Usar A_REVERSE como alternativa
  }

  // Dibujar el texto del cartel
  for (int i = 0; i < texto.length(); i++) {
    mvaddch(y, x + i, texto[i]);
  }

  // Desactivar los colores
  attroff(COLOR_PAIR(this->par_colores));
}

void Cartel::setPosicion(int nuevo_x, int nuevo_y) {
  x = nuevo_x;
  y = nuevo_y;
}

void Cartel::setTexto(std::string nuevo_texto) { texto = nuevo_texto; }

void Cartel::setColores(int nuevo_color_texto, int nuevo_color_fondo) {
  color_texto = nuevo_color_texto;
  color_fondo = nuevo_color_fondo;
}