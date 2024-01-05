#ifndef CLIENTEVIP_H
#define CLIENTEVIP_H

#include "cliente.h"
#include <string>

class ClienteVIP : public Cliente {
private:
    std::string tipoClienteVIP; // Tipo de cliente VIP

public:
    ClienteVIP(); // Constructor por defecto
    ClienteVIP(int idCliente, std::string nombre, std::string direccion, std::string tipoClienteVIP); // Constructor parametrizado
    
    std::string getTipoClienteVIP() const; // Método para obtener el tipo de cliente VIP
    void setTipoClienteVIP(std::string tipoClienteVIP); // Método para establecer el tipo de cliente VIP

    void aplicarDescuento(double total) override; // Método para aplicar un descuento al total de la compra
    
};
#endif 