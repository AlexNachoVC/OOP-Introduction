#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>

class Producto {
private:
    int idProducto; // Id del producto
    std::string nombre; // Nombre del producto
    double precio; // Precio del producto

public:
    Producto( ); // Constructor por defecto
    Producto(int idProducto, std::string nombre, double precio); // Constructor parametrizado
    ~Producto(); // Destructor

    int getIdProducto() const; // Método para obtener el id del producto
    void setIdProducto(int idProducto); // Método para establecer el id del producto
    std::string getNombre() const; // Método para obtener el nombre del producto
    void setNombre(std::string nombre); // Método para establecer el nombre del producto
    double getPrecio() const; // Método para obtener el precio del producto
    void setPrecio(double precio); // Método para establecer el precio del producto 

    
};
#endif