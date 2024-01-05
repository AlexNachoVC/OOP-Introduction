#include "tome.h"
#include <iostream>

// Constructor por defecto
Tome::Tome() : Book(), volume(0) {}

// Constructor con parametros
Tome::Tome(const std::string &title, const std::string &author, int volume) : Book(title, author), volume(volume) {}

// Destructor
Tome::~Tome() {}

// Metodo para obtener el volumen del libro
int Tome::getVolume() const {
    return volume;
}

// Metodo para establecer el volumen del libro
void Tome::setVolume(int volume) {
    this->volume = volume;
}

// Metodo para mostrar la informacion del libro, sobreescribiendo la funcion displayInfo de la clase Book     
void Tome::displayInfo() const {
    Book::displayInfo();
    std::cout << "Volume: " << volume << std::endl;
}
