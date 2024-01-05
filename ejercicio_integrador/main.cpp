#include <iostream>
#include "empleado.h"
#include "fecha.h"

void mostrarEmpleado(Empleado& empleado) {
    std::cout << "Nombre: " << empleado.getNombreEmp()
              << ", Sueldo: " << empleado.getSueldoEmp()
              << ", Cumpleanios: " << empleado.getCumpleAnioEmp().getDia()
              << "/" << empleado.getCumpleAnioEmp().getMes() << std::endl;
}

int main() {
    // Crear a Pepe
    Empleado emp1;
    emp1.setNombreEmp("Pepe");
    emp1.setSueldoEmp(10000);
    Fecha fecha1;
    fecha1.setDia(19);
    fecha1.setMes(5);
    emp1.setCumpleAnioEmp(fecha1);

    // Crear a Rocio
    Empleado emp2;
    emp2.setNombreEmp("Rocio");
    emp2.setSueldoEmp(12000);
    Fecha fecha2;
    fecha2.setDia(1);
    fecha2.setMes(1);
    emp2.setCumpleAnioEmp(fecha2);

    // Mostrar datos de los empleados
    mostrarEmpleado(emp1);
    mostrarEmpleado(emp2);

    // Intentar subir el salario de Pepe un 15%
    emp1.subeSueldo(15);
    std::cout << "Nombre: " << emp1.getNombreEmp() << ", Sueldo: " << emp1.getSueldoEmp() << std::endl;

    // Mostrar la fecha del cumpleaños de Rocio
    std::cout << "Fecha de cumpleanios de Rocio: " << emp2.getCumpleAnioEmp().getDia() << "/" << emp2.getCumpleAnioEmp().getMes() << std::endl;

    // Intentar subir el salario de Pepe un 5%
    emp1.subeSueldo(5);
    std::cout << "Nombre: " << emp1.getNombreEmp() << ", Sueldo: " << emp1.getSueldoEmp() << std::endl;

    return 0;
}