#include "clienteVIP.h"
#include <iostream>

 // Constructor por defecto
ClienteVIP::ClienteVIP() : Cliente(), tipoClienteVIP("") {}

// Constructor parametrizado
ClienteVIP::ClienteVIP(int idCliente, std::string nombre, std::string direccion, std::string tipoClienteVIP)
    : Cliente(idCliente, nombre, direccion), tipoClienteVIP(tipoClienteVIP) {}

// Método para obtener el tipo de cliente VIP
std::string ClienteVIP::getTipoClienteVIP() const {
    return tipoClienteVIP;
}

// Método para establecer el tipo de cliente VIP
void ClienteVIP::setTipoClienteVIP(std::string tipoClienteVIP) {
    this->tipoClienteVIP = tipoClienteVIP;
}

// Método para aplicar un descuento al total de la compra
void ClienteVIP::aplicarDescuento(double total)  {
    double descuento;
    if (tipoClienteVIP == "Oro") {
        descuento = 0.10;
    } else if (tipoClienteVIP == "Platino") {
        descuento = 0.15;
    } else if (tipoClienteVIP == "Diamante") {
        descuento = 0.20;
    } else {
        std::cout << "Tipo de cliente VIP no reconocido. No se aplicara descuento." << std::endl;
        return;
    }
    double nuevoTotal = total * (1 - descuento);
    std::cout << "Total al que se le aplicara el descuento: " << total << std::endl;
    std::cout << "Se ha aplicado un descuendo del " << descuento * 100 << "%. Nuevo total: " << nuevoTotal << std::endl;
}