#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
    private:
        std::string title; // Titulo del libro
        std::string author; // Autor del libro

    public:
        Book(); // Constructor por defecto

        Book(const std::string &title, const std::string &author); // Constructor con parametros

        ~Book(); // Destructor

        std::string getTitle() const; // Metodo para obtener el titulo del libro
        std::string getAuthor() const; // Metodo para obtener el autor del libro

        void setTitle(const std::string &title); //Metodo para establecer el titulo del libro
        void setAuthor(const std::string &author); // Metodo para establecer el autor del libro

        virtual void displayInfo() const; // Metodo para mostrar la informacion del libro

};

#endif
