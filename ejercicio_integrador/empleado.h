#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
#include "fecha.h"

// Clase Empleado
class Empleado {
private:
    std::string nombreEmp; // Nombre del empleado
    float sueldoEmp; // Sueldo del empleado
    Fecha cumpleAnioEmp; // Fecha de cumpleaños del empleado

public:
    Empleado(); // Constructor por defecto
    ~Empleado(); // Destructor
    std::string getNombreEmp(); // Retorna el nombre del empleado
    float getSueldoEmp(); // Retorna el sueldo del empleado
    Fecha getCumpleAnioEmp(); // Retorna la fecha de cumpleaños del empleado
    void setNombreEmp(std::string nombre); // Establece el nombre del empleado
    void setSueldoEmp(float sueldo); // Establece el sueldo del empleado
    void setCumpleAnioEmp(Fecha fecha); // Establece la fecha de cumpleaños del empleado
    void subeSueldo(float porcentaje); // Incrementa el sueldo del empleado en un porcentaje dado
};

#endif