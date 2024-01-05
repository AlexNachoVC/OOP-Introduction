#include "carritoCompras.h"
#include <iostream>

// Constructor por defecto
CarritoCompras::CarritoCompras() : numProductos(0) {}

// Destructor
CarritoCompras::~CarritoCompras() {}

// Método para agregar un producto al carrito
void CarritoCompras::agregarProducto(const Producto& producto) {
    if (numProductos >= MAX_PRODUCTOS) {
        std::cout << "El carrito está lleno. No se puede agregar el producto" << std::endl;
        return;
    }
    productos[numProductos] = producto;
    numProductos++;
    std::cout << "Producto agregado con exito al carrito." << std::endl;
}

// Método para calcular el total de la compra
double CarritoCompras::calcularTotalCompra() const {
    double total = 0.0;
    for (int i = 0; i < numProductos; i++) {
        total += productos[i].getPrecio();
    }
    return total;
}

// Método para mostrar el carrito de compras
void CarritoCompras::mostrarCarrito() const {
    std::cout << "Productos en el carrito" << std::endl;
    for (int i = 0; i < numProductos; i++) {
        std::cout << "ID: " << productos[i]. getIdProducto()
                  << ", Nombre: " << productos[i].getNombre()
                  << ", Precio: " << productos[i].getPrecio() << std::endl;
    }
    std::cout << "Total de la compra: " << calcularTotalCompra() << std::endl;
}

// Método para eliminar un producto del carrito
void CarritoCompras::eliminarProducto(int idProducto) {
    for (int i = 0; i < numProductos; i++) {
        if (productos[i].getIdProducto() == idProducto) {
            for (int j = i; j < numProductos -1; j++) {
                productos[j] = productos[j + 1];
            }
            numProductos--;
            std::cout << "Producto eliminado con exito del carrito." << std::endl;
            return; 
        }
    }
    std::cout << "El producto no se encuentra en el carrito." << std::endl;
}