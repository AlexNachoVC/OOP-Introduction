#include "miclase.h"
#include <iostream>

int main(){
    MiClase miObjeto; // Declara el objeto miObjeto de tipo MiClase
    miObjeto.setVar1(1500); // Cambia por 1500 el valor de var1 de miObjeto
    std::cout << miObjeto.getVar1(); // Muestra en pantalla el contenido de var1 de miObjeto
    return 0;
}