#include <iostream>
#include "Fraccion.h"

int main() {
    // Solicita al usuario introduzca los valores para las 3 fracciones
    Fraccion fraccion1, fraccion2, fraccion3;
    for (int i = 0; i < 3; i++) {
        int num, den;
        std::cout << "Introduce el numerador de la fraccion " << i+1 << ": ";
        std::cin >> num;
        std::cout << "Introduce el denominador de la fraccion " << i+1 << ": ";
        std::cin >> den;
        while (den == 0) {
            std::cout << "El denominador no puede ser cero. Introduce de nuevo: ";
            std::cin >> den;
        }
        if (i == 0) {
            fraccion1.setNum(num);
            fraccion1.setDen(den);
        } else if (i == 1) {
            fraccion2.setNum(num);
            fraccion2.setDen(den);
        } else {
            fraccion3.setNum(num);
            fraccion3.setDen(den);
        }
    }

    // Utiliza los objetos fraccion1, fraccion2 y fraccion3 para probar la suma de fracciones
    Fraccion suma = fraccion1.sumaFracciones(fraccion1, fraccion2);
    suma = suma.sumaFracciones(suma, fraccion3);

    // Muestra el resultado
    std::cout << "La suma de las tres fracciones es: ";
    suma.imprimeFraccion();

    return 0;
}