#ifndef FRACCION_H
#define FRACCION_H
#include <iostream>

class Fraccion {
private:
    int num; // numerador
    int den; // denominador

public:
    // Constructor default
    Fraccion() : num(1), den(2) {}

    // Constructor con parámetros
    Fraccion(int num, int den) : num(num), den(den) {}

    // Destructor
    ~Fraccion() {}

    // Métodos de acceso
    int getNum() const { return num; }
    int getDen() const { return den; }

    // Métodos de modificación
    void setNum(int num) { this->num = num; }
    void setDen(int den) { this->den = den; }

    // Método para calcular el valor real
    double calcValorReal() const { return static_cast<double>(num) / den; }

    // Método para sumar fracciones
    Fraccion sumaFracciones(const Fraccion& f1, const Fraccion& f2) {
        int num = f1.getNum() * f2.getDen() + f2.getNum() * f1.getDen();
        int den = f1.getDen() * f2.getDen();
        return Fraccion(num, den);
    }
    // Método para imprimir fracciones
    void imprimeFraccion() const {
        std::cout << num << "/" << den << " = " << calcValorReal() << std::endl;
    }
};

#endif