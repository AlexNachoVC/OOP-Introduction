#include "jugador.h"
#include <iostream>

// Constructor predeterminado
Jugador::Jugador() : Personaje(), puntuacion(0.0) {}

// Constructor parametrizado
Jugador::Jugador(std::string nombre, double salud, int nivel, double puntuacion) : Personaje(nombre, salud, nivel), puntuacion(puntuacion) {}

// Destructor
Jugador::~Jugador() {}

// Getter y Setter
double Jugador::getPuntuacion() { return puntuacion; }
void Jugador::setPuntuacion(double puntuacion) { this->puntuacion = puntuacion; }

// Método para aumentar puntuación
void Jugador::aumentarPuntuacion(double puntos) {
    puntuacion += puntos;
}

// Sobrescribir método para mostrar información
void Jugador::mostrarInformacion() {
    Personaje::mostrarInformacion();
    std::cout << "Puntuacion: " << puntuacion << std::endl;
}

// Método para resetear puntuación
void Jugador::resetearPuntuacion() {
    puntuacion = 0;
}

// Método para jugar
void Jugador::jugar(double puntos) {
    aumentarPuntuacion(puntos);
}