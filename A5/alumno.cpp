#include "alumno.h"
#include <iostream>

Alumno::Alumno() : matricula(""), nombre(""), edad(0), carrera("") {}

Alumno::Alumno(std::string matricula, std::string nombre, int edad, std::string carrera) 
    : matricula(matricula), nombre(nombre), edad(edad), carrera(carrera) {}

std::string Alumno::getMatricula() { return matricula; }
std::string Alumno::getNombre() { return nombre; }
int Alumno::getEdad() { return edad; }
std::string Alumno::getCarrera() { return carrera; }

void Alumno::setMatricula(std::string matricula) { this->matricula = matricula; }
void Alumno::setNombre(std::string nombre) { this->nombre = nombre; }
void Alumno::setEdad(int edad) { this->edad = edad; }
void Alumno::setCarrera(std::string carrera) { this->carrera = carrera; }

void Alumno::imprimeAlumno() {
    std::cout << "Matricula: " << matricula << "\nNombre: " << nombre 
              << "\nEdad: " << edad << "\nCarrera: " << carrera << std::endl;
}

void Alumno::cumpleanios() { edad++; }