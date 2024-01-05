#include "producto.h"

// Constructor por defecto
Producto::Producto() : idProducto(0), nombre(" "), precio(0.0) {}

// Constructor parametrizado
Producto::Producto(int idProducto, std::string nombre, double precio)
    : idProducto(idProducto), nombre(nombre), precio(precio) {}

// Destructor
Producto::~Producto() {}

// Método para obtener el id del producto
int Producto::getIdProducto() const {
    return idProducto;
}

// Método para establecer el id del producto
void Producto::setIdProducto(int idProducto) {
    this->idProducto = idProducto;
}

// Método para obtener el nombre del producto
std::string Producto::getNombre() const {
    return nombre;
}

// Método para establecer el nombre del producto
void Producto::setNombre(std::string nombre) {
    this->nombre = nombre;
}

// Método para obtener el precio del producto
double Producto::getPrecio() const {
    return precio;
}

// Método para establecer el precio del producto
void Producto::setPrecio(double precio) {
    this->precio = precio;
}