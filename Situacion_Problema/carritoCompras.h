#ifndef CARRITOCOMPRAS_H
#define CARRITOCOMPRAS_H

#include "producto.h"

class CarritoCompras {   
private:
    static const int MAX_PRODUCTOS = 100; // Número máximo de productos en el carrito
    Producto productos[MAX_PRODUCTOS]; // Arreglo de productos
    int numProductos; // Número de productos en el carrito

public: 
    CarritoCompras(); // Constructor por defecto
    ~CarritoCompras(); // Destructor

    void agregarProducto(const Producto& producto); // Método para agregar un producto al carrito
    double calcularTotalCompra() const; // Método para calcular el total de la compra
    void mostrarCarrito() const; // Método para mostrar el carrito de compras
    void eliminarProducto(int idProducto); // Método para eliminar un producto del carrito       


};
#endif