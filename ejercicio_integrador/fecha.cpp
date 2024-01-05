#include "fecha.h"

// Constructor por defecto
Fecha::Fecha() : dia(0), mes(0) {}

// Destructor
Fecha::~Fecha() {}

// Retorna el dia
int Fecha::getDia() {
    return dia;
}

// Retorna el mes
int Fecha::getMes() {
    return mes;
}

// Establece el dia
void Fecha::setDia(int dia) {
    this->dia = dia;
}

// Establece el mes
void Fecha::setMes(int mes) {
    this->mes = mes;
}