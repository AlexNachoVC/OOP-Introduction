#include <iostream>
#include "Fraccion.h"

const int N = 5; // Declara N como una constante entera con un valor igual o mayor a 5

int main() {
    Fraccion fracciones[N]; // Arreglo de N fracciones

    // Solicita al usuario introduzca los valores para las N fracciones
    for (int i = 0; i < N; i++) {
        int num, den;
        std::cout << "Introduce el numerador de la fraccion " << i+1 << ": ";
        std::cin >> num;
        std::cout << "Introduce el denominador de la fraccion " << i+1 << ": ";
        std::cin >> den;
        // Asegura que el denominador no sea cero
        while (den == 0) {
            std::cout << "El denominador no puede ser cero. Introduce de nuevo: ";
            std::cin >> den;
        }
        // Guarda los valores en el arreglo de fracciones
        fracciones[i].setNum(num);
        fracciones[i].setDen(den);
    }

    // Solicita al usuario que elija las fracciones a operar
    int f1, f2;
    std::cout << "Elige la primera fraccion a sumar (1-" << N << "): ";
    std::cin >> f1;
    std::cout << "Elige la segunda fraccion a sumar (1-" << N << "): ";
    std::cin >> f2;

    // Asegura que las elecciones son válidas
    if (f1 < 1 || f1 > N || f2 < 1 || f2 > N) {
        std::cout << "Elecciones invalidas. Fin del programa.";
        return 1;
    }

    // Utiliza las fracciones elegidas para probar la suma de fracciones
    Fraccion suma = fracciones[f1-1].sumaFracciones(fracciones[f1-1], fracciones[f2-1]);

    // Muestra el resultado
    std::cout << "La suma de las fracciones escogidas es: ";
    suma.imprimeFraccion();

    return 0;
}