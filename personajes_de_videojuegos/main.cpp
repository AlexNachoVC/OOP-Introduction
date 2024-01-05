#include "personaje.h"
#include "jugador.h"
#include <iostream>

int main() {
    // Crear una instancia de Personaje
    Personaje personaje("Personaje1", 100.0, 1);
    personaje.mostrarInformacion();
    personaje.recibirDanio(20.0);
    personaje.subirNivel();
    std::cout << "Despues de recibir danio y subir de nivel:\n";
    personaje.mostrarInformacion();

    std::cout << "\n-----------------------\n\n";

    // Crear una instancia de Jugador
    Jugador jugador("Jugador1", 100.0, 1, 0.0);
    jugador.mostrarInformacion();
    jugador.jugar(50.0);
    jugador.aumentarPuntuacion(20.0);
    std::cout << "Despues de jugar y aumentar puntuacion:\n";
    jugador.mostrarInformacion();

    return 0;
}