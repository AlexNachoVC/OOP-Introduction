#include "alumno.h"
#include "alumno.cpp"
#include <iostream>

int main() {
    Alumno alumno1("A01659714", "Alejandro", 18, "Ingenieria en Tecnologías Computacionales");
    alumno1.imprimeAlumno();
    alumno1.cumpleanios();
    std::cout << "Edad después del cumpleaños: " << alumno1.getEdad() << std::endl;
    return 0;
}