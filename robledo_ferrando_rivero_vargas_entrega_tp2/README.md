# ***Como un día cualquiera***

## ***📄 Ficha Técnica***

* ##   ***Nombre del proyecto: Como un día cualquiera***
* ## ***Autores:Robledo_Ferrando_Rivero_Camilo***
* ## ***Lenguaje: C++***
* ## ***librerías externas: Ncurses***
* ## ***Entorno de desarrollo: Linux Lite + VSCode***
* ## ***Tipo de juego: Arcade 2D en consola***


* 🕹️  _Instrucciones de Juego_


* 🎯 Objetivo
Sobrevive moviéndote por la ciudad, esquivando deudas y estatus negativos mientras recolectás premios para activar tu superpoder: ¡disparar!

🔫 Cada disparo que destruye una deuda suma 1 punto.

🏆 Al llegar a 10 puntos, ganás la partida.

* 🎮 Controles
* Teclas de	acción
← ↑ ↓ →	Mover al personaje

* Tecla espaciadora para disparar (una vez activado el premio)

* ESC (tecla 27)	Salir del juego

* 🧍‍♂️ Mecánicas del Jugador
* Comenzás con 3 vidas y 10 unidades de energía.

* Si una deuda (#DEUDAS) te golpea, perdés 1 vida.

* Si tocás un estatus negativo (#ESTATUS), perdés energía.

* Al tocar un premio (*), se activa el modo disparo.

* Si perdés todas las vidas o energía, el juego termina.

* 💡 Condiciones de Fin
* 💀 Si tu energía o vidas llegan a 0 → GAME OVER.

* 🎉 Si sumás 10 puntos disparando → ¡GANASTE!.

* En caso de perder o ganar la consola pregnta si se quiere seguir jugando o salir (s/n) "s" para seguir jugando "n" para salir 

* 📦 Estructura del proyecto

* main.cpp → Lógica principal y bucle del juego.

* Jugador.h/.cpp → Control del jugador, movimiento, estado y disparos.

* Disparo.h/.cpp → Gestión de proyectiles.

* Deuda.h/.cpp → Enemigos que restan vidas.

* Estatus.h/.cpp → Enemigos que restan energía.

* Mapa.h/.cpp → Renderizado y manejo del mapa ASCII.

* Constantes.h → Configuraciones globales.


