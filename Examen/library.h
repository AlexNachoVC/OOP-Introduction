#ifndef LIBRARY_H
#define LIBRARY_H

#include "book.h"
#include "tome.h"
#include <array>

class Library {
    private:
        static const int MAX_BOOKS = 3; // Maximo de libros
        static const int MAX_TOMES = 5; // Maximo de tomos
        Book collectionBooks[MAX_BOOKS]; // Array de libros
        Tome collectionTomes[MAX_TOMES]; // Array de tomos
        int bookCount; // Cantidad de libros
        int tomeCount; // Cantidad de tomos

    public:
        Library(); // Constructor por defecto

        ~Library(); // Destructor

        int getBookCount() const; // Metodo para obtener la cantidad de libros
        
        int getTomeCount() const; // Metodo para obtener la cantidad de tomos

        void addBook(const Book &book); // Metodo para agregar un libro

        void addTome(const Tome &tome); // Metodo para agregar un tomo 

        void displayBooks() const; // Metodo para mostrar los libros

        void displayTomes() const; // Metodo para mostrar los tomos 

};

#endif