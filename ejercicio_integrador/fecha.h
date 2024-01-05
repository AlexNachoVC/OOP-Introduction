#ifndef FECHA_H
#define FECHA_H

// Clase Fecha
class Fecha {
private:
    int dia; // Dia
    int mes; // Mes

public:
    Fecha(); // Constructor por defecto
    ~Fecha(); // Destructor
    int getDia(); // Retorna el dia
    int getMes(); // Retorna el mes
    void setDia(int dia); // Establece el dia
    void setMes(int mes); // Establece el mes
};

#endif