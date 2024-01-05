#include "empleado.h"
#include <iostream>

// Constructor por defecto
Empleado::Empleado() : nombreEmp(""), sueldoEmp(0.0), cumpleAnioEmp() {} 

// Destructor
Empleado::~Empleado() {}

// Retorna el nombre del empleado
std::string Empleado::getNombreEmp() {
    return nombreEmp; 
}

// Retorna el sueldo del empleado
float Empleado::getSueldoEmp() {
    return sueldoEmp;
}

// Retorna la fecha de cumpleaños del empleado
Fecha Empleado::getCumpleAnioEmp() {
    return cumpleAnioEmp;
}

// Establece el nombre del empleado
void Empleado::setNombreEmp(std::string nombre) {
    this->nombreEmp = nombre;
}

// Establece el sueldo del empleado
void Empleado::setSueldoEmp(float sueldo) {
    this->sueldoEmp = sueldo;
}

// Establece la fecha de cumpleaños del empleado
void Empleado::setCumpleAnioEmp(Fecha fecha) {
    this->cumpleAnioEmp = fecha;
}

// Incrementa el sueldo del empleado en un porcentaje dado
void Empleado::subeSueldo(float porcentaje) {
    if (porcentaje < 1.0 || porcentaje > 10.0) {
        std::cout << "Porcentaje invalido, no hay incremento salarial" << std::endl;
    } else {
        sueldoEmp += sueldoEmp * (porcentaje / 100.0);
    }
}