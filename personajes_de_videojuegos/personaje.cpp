#include "personaje.h"
#include <iostream>

// Constructor predeterminado
Personaje::Personaje() : nombre("Desconocido"), salud(100.0), nivel(1) {}

// Constructor parametrizado
Personaje::Personaje(std::string nombre, double salud, int nivel) : nombre(nombre), salud(salud), nivel(nivel) {}

// Destructor
Personaje::~Personaje() {}

// Getters
std::string Personaje::getNombre() { return nombre; }
double Personaje::getSalud() { return salud; }
int Personaje::getNivel() { return nivel; }

// Setters
void Personaje::setNombre(std::string nombre) { this->nombre = nombre; }
void Personaje::setSalud(double salud) { this->salud = salud > 0 ? salud : 0; }
void Personaje::setNivel(int nivel) { this->nivel = nivel; }

// Método para mostrar información
void Personaje::mostrarInformacion() {
    std::cout << "Nombre: " << nombre << "\nSalud: " << salud << "\nNivel: " << nivel << std::endl;
}

// Método para recibir daño
void Personaje::recibirDanio(double danio) {
    salud -= danio;
    if (salud < 0) salud = 0;
}

// Método para subir de nivel
void Personaje::subirNivel() {
    nivel++;
}