#include "library.h"
#include "book.h"
#include "tome.h"
#include <iostream>

int main() {
    // Crear una instancia de la clase Book
    Book book1("The Lord of the Rings", "J. R. R. Tolkien");
    Book book2("The Great Gatsby", "F. Scott Fitzgerald");
    Book book3("I, Robot", "Isaac Asimov");

    // Crear una instancia de la clase Tome
    Tome tome1("Encyclopedia of Computer Science", "Anthony Ralston", 1);
    Tome tome2("Encyclopedia of Computer Science", "Anthony Ralston", 2);
    Tome tome3("Encyclopedia of Computer Science", "Anthony Ralston", 3);
    Tome tome4("Encyclopedia of Computer Science", "Anthony Ralston", 4);
    Tome tome5("Encyclopedia of Computer Science", "Anthony Ralston", 5);

    // Crear una instancia de la clase Library
    Library library;

    // Agregar libros a la biblioteca
    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);

    // Agregar tomos a la biblioteca
    library.addTome(tome1);
    library.addTome(tome2);
    library.addTome(tome3);
    library.addTome(tome4);
    library.addTome(tome5);


    // Mostrar el contenido de la biblioteca
    std::cout << "Library Books: " << std::endl;
    library.displayBooks();
    std::cout << "\n -------------------\n" << std::endl;
    std::cout << "Library Tomes: " << std::endl;
    library.displayTomes();

    return 0;
}