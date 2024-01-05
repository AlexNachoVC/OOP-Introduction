#include "clienteVIP.h"
#include "carritoCompras.h"
#include "producto.h"
#include <iostream>
#include <string>

int main() {
    ClienteVIP clientes[5]; // Array de 5 clientes
    CarritoCompras carritos [5]; // Array de 5 carritos de compras

    for (int i = 0; i < 5; i++) {
        std::string nombre; // Nombre del cliente
        std::string direccion; // Dirección del cliente
        std::string tipoClienteVIP; // Tipo de cliente VIP

        // Obtener los datos del cliente
        std::cout << "Ingrese el nombre del cliente " << i + 1 << ": ";
        std::getline(std::cin, nombre);
        std::cout << "Ingrese la direccion del cliente " << i + 1 << ": ";
        std::getline(std::cin, direccion);
        std::cout << "Ingrese el tipo de cliente VIP (Oro, Platino, Diamante) para el cliente " << i + 1 << ": ";
        std::getline(std::cin, tipoClienteVIP);

        // Crear el cliente
        clientes[i] = ClienteVIP(i + 1, nombre, direccion, tipoClienteVIP);
    }
    // Agregar productos a los carritos
    std::cout << std::endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) { 
            Producto producto(j + 1, "Producto " + std::to_string(j + 1), 100.0 * (j + 1));
            carritos[i].agregarProducto(producto);
        }   
    }
    
    for (int i = 0; i < 5; i++) { // Iterar sobre los clientes
        std::cout << "\n--------------------------------------------------\n" << std::endl;
        std::cout << std::endl << "Cliente " << i + 1 << ":" << std::endl;

        // Mostrar la información del cliente antes de la compra
        clientes[i].displayInfo();
        
        // Mostrar el carrito de compras antes de eliminar productos
        std::cout << "Carrito antes de eliminar productos:" << std::endl;
        carritos[i].mostrarCarrito();
        std::cout << std::endl;

        // Crear un array de productos con los productos del carrito para realizar la compra
        std::cout << "Realizando compra..." << std::endl;
        Producto productos[3];
        for (int j = 0; j < 3; j++) { 
            productos[j] = Producto(j + 1, "Producto " + std::to_string(j + 1), 100.0 * (j + 1));
        }

        // Realizar la primera compra
        clientes[i].realizarCompra(productos, 3);
        std::cout << std::endl;

        // Mostrar la información del cliente después de la primera compra
        clientes[i].displayInfo();
        std::cout << std::endl;
        
        // Eliminar un producto del carrito
        std::cout << "Eliminando producto con ID -2- del carrito de compras..." << std::endl;
        carritos[i].eliminarProducto(2);
        std::cout << std::endl;

        // Mostrar el carrito de compras después de eliminar el producto
        std::cout << "Carrito de compras despues de eliminar el producto:" << std::endl;
        carritos[i].mostrarCarrito();

        // Calcular el total de la compra después de eliminar el producto
        double total = carritos[i].calcularTotalCompra();
        std::cout << "Precio total despues de eliminar el producto: " << total << std::endl;
        clientes[i].aplicarDescuento(total);

        // Mostrar la información del cliente después de la compra
        std::cout << std::endl;
        std::cout << "Realizando segunda compra, despues de eliminar el producto..." << std::endl;

        // Crear un array de productos sin el producto eliminado para realizar la compra después de eliminar el producto
        Producto productosRestantes[2];
        int k = 0;
        for (int j = 0; j < 3; j++) {
            if (productos[j].getIdProducto() != 2) {
                productosRestantes[k] = productos[j];
                k++;
            }
        }
        // Realizar la segunda compra, después de eliminar el producto
        clientes[i].realizarCompra(productosRestantes, 2);
        std::cout << std::endl;

        // Mostrar la información del cliente después de la segunda compra
        clientes[i].displayInfo();
        std::cout << std::endl;
    }

    return 0;
}