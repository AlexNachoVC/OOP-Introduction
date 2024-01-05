#include "library.h"
#include <iostream>

// Constructor por defecto
Library::Library() : bookCount(0), tomeCount(0) {}

// Destructor
Library::~Library() {}

// Obtener el numero actual de libros en la biblioteca
int Library::getBookCount() const {
    return bookCount;
}

// Obtener el numero actual de tomos en la biblioteca
int Library::getTomeCount() const {
    return tomeCount;
}

// Metodo para agregar un libro 
void Library::addBook(const Book &book) {
    if (bookCount < 3) {
        collectionBooks[bookCount++] = book;
    } 
    else {
        std::cout << "No se pueden agregar mas libros" << std::endl;
    }
}

// Metodo para agregar un tomo
void Library::addTome(const Tome &tome) {
    if (tomeCount < 5) {
        collectionTomes[tomeCount++] = tome;
    }
    else {
        std::cout << "No se pueden agregar mas tomos" << std::endl;
    }
}

// Metodo para mostrar los libros
void Library::displayBooks() const {
    for (int i = 0; i < bookCount; i++) {
        collectionBooks[i].displayInfo();
    }
}

// Metodo para mostrar los tomos
void Library::displayTomes() const {
    for (int i = 0; i < tomeCount ; i++) {
        collectionTomes[i].displayInfo();
    }
}