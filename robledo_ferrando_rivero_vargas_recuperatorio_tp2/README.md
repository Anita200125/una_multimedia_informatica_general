# ***Como un día cualquiera***

## ***📄 Ficha Técnica***

* ##   ***Nombre del proyecto: Como un día cualquiera***
* ## ***Autores:Robledo_Ferrando_Rivero_Vargas***
* ## ***Lenguaje: C++***
* ## ***librerías externas: Ncurses***
* ## ***Entorno de desarrollo: Linux Lite + VSCode***
* ## ***Tipo de juego: Arcade 2D en consola***


* 🕹️  _Instrucciones de Juego_


* 🎯 Objetivo
Sobrevive moviéndose por la ciudad, el trabajador es un jugador de esta sociedad, sobrevive pagando deudas. Mantener el estatus le quita energía mientras su misión es encontrar la paga de su trabajo para activar su superpoder: ¡disparar pesos para pagar deudas! Su sueldo le dura 20 segundos y para poder seguir tirando plata tiene que volver a cobrar por ventanilla.

🔫 Cada disparo que destruye una deuda suma 1 punto.
Con 3 puntos las deudas caen mas rápido y son más, los disparos te duran 20 segundos.

🏆 Al llegar a 20 puntos, ganás la partida.

* 🎮 Controles
* Teclas de	acción
← ↑ ↓ →	Mover al personaje.

* Tecla espaciadora para disparar (una vez activado el premio).

* ESC (tecla 27)	Salir del juego.

* 🧍‍♂️ Mecánicas del Jugador-trabajador.
* Comenzás con 3 vidas y 5 unidades de energía.

* Si una deuda (#DEUDAS) te golpea, perdés 1 vida.

* Si tocás un estatus negativo (#ESTATUS), perdés energía.

* Al tocas sueldo (*), se activa el modo disparo de pesos.
El disparo dura 20 segundos.

* Si perdés todas las vidas o energía, el juego termina.

* 💡 Condiciones de Fin
* 💀 Si tu energía o vidas llegan a 0 → GAME OVER.

* 🎉 Si sumás 20 puntos disparando → ¡GANASTE!.

* En caso de perder o ganar la consola pregnta si se quiere seguir jugando o salir (s/n) "s" para seguir jugando "n" para salir 

* 📦 Estructura del proyecto

* main.cpp → Lógica principal y bucle del juego.

* Jugador.h/.cpp → Control del jugador, movimiento, estado y disparos.

* Disparo.h/.cpp → Gestión de proyectiles.

* Deuda.h/.cpp → Enemigos que restan vidas.

* Estatus.h/.cpp → Enemigos que restan energía.

* Mapa.h/.cpp → Renderizado y manejo del mapa ASCII.

* Constantes.h → Configuraciones globales.


