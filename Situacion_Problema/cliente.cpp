#include "cliente.h"
#include <iostream>

// Constructor por defecto
Cliente::Cliente() : idCliente(0), nombre(""), direccion(""), numCompras(0) {}

// Constructor parametrizado
Cliente::Cliente(int idCliente, std::string nombre, std::string direccion) 
    : idCliente(idCliente), nombre(nombre), direccion(direccion), numCompras(0) {}

// Destructor
Cliente::~Cliente() {}

// Método para obtener el id del cliente
int Cliente::getIdCliente() const {
    return idCliente;
}

// Método para establecer el id del cliente
void Cliente::setIdCliente(int idCliente) {
    this->idCliente = idCliente;
}

// Método para obtener el nombre del cliente
std::string Cliente::getNombre() const {
    return nombre;
}

// Método para establecer el nombre del cliente
void Cliente::setNombre(std::string nombre) {
    this->nombre = nombre;
}

// Método para obtener la dirección del cliente
std::string Cliente::getDireccion() const {
    return direccion;
}

// Método para establecer la dirección del cliente
void Cliente::setDireccion(std::string direccion) {
    this->direccion = direccion;
}

// Método para obtener el historial de compras del cliente
int* Cliente::getHistorialCompras() const {
    return (int*)historialCompras;
}

// Método para obtener el número de compras del cliente
int Cliente::getNumCompras() const {
    return numCompras;
}

// Método para establecer el número de compras del cliente
void Cliente::setNumCompras(int numCompras) {
    this->numCompras = numCompras;
}

// Método para realizar una compra
void Cliente::realizarCompra(Producto productos[], int cantidad) {
    if (numCompras + cantidad <= 100) {
        for (int i = 0; i < cantidad; i++) {
            historialCompras[numCompras] = productos[i].getIdProducto();
            numCompras++;
        }
        std::cout << "Compra realizada con exito. Total de productos comprados: " << numCompras << std::endl;
    } else {
        std::cout << "No se puede realizar la compra. El historial de compras está lleno." << std::endl;
    }
}

// Método para aplicar un descuento al total de la compra
void Cliente::aplicarDescuento(double total) {
    if (numCompras >= 5) {
        total *= 0.95;
        std::cout << "Se ha aplicado un descuento del 5%. Nuevo total:" << total << std::endl;
    } else {
        std::cout << "No se ha aplicado ningún descuento. Total:" << total << std::endl;
    }
}

// Método para mostrar la información del cliente
void Cliente::displayInfo() const {
    std::cout << "ID Cliente: " << idCliente << std::endl;
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Direccion: " << direccion << std::endl;
    std::cout << "Historial de compras: " << std::endl;
    for (int i = 0; i < numCompras; i++) {
        std::cout << historialCompras[i] << " ";
    }
    std::cout << std::endl;
}