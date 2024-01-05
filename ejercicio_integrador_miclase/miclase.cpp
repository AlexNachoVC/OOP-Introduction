#include "MiClase.h"

MiClase::MiClase() {
    var1 = 101; // Inicializa var1 en 101 en el constructor
}

void MiClase::setVar1(int value) {
    var1 = value; // Modifica var1 por el valor proporcionado
}

int MiClase::getVar1() {
    return var1; // Devuelve el valor de var1
}