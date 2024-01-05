#ifndef CLIENTE_H
#define CLIENTE_H

#include "producto.h"
#include <string>

class Cliente {
private:
    int idCliente; // Identificador único del cliente
    std::string nombre; // Nombre del cliente
    std::string direccion; // Dirección del cliente
    int historialCompras[100]; // Historial de compras del cliente
    int numCompras; // Número de compras realizadas


public:
    Cliente(); // Constructor por defecto
    Cliente(int idCliente, std::string nombre, std::string direccion); // Constructor parametrizado
    ~Cliente(); // Destructor

    int getIdCliente() const; // Método para obtener el id del cliente
    void setIdCliente(int idCliente); // Método para establecer el id del cliente
    std::string getNombre() const; // Método para obtener el nombre del cliente
    void setNombre(std::string nombre); // Método para establecer el nombre del cliente
    std::string getDireccion() const; // Método para obtener la dirección del cliente
    void setDireccion(std::string direccion); // Método para establecer la dirección del cliente
    int* getHistorialCompras() const; // Método para obtener el historial de compras del cliente
    int getNumCompras() const; // Método para obtener el número de compras del cliente
    void setNumCompras(int numCompras); // Método para establecer el número de compras del cliente

    void realizarCompra(Producto productos[], int cantidad); // Método para realizar una compra
    virtual void aplicarDescuento(double total); // Método para aplicar un descuento al total de la compra
    void displayInfo() const; // Método para mostrar la información del cliente
    
};

#endif