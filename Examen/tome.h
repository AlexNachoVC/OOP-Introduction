#ifndef TOME_H
#define TOME_H

#include "book.h"

class Tome : public Book {
    private:
        int volume; // Volumen del libro

    public:
        Tome(); // Constructor por defecto

        Tome(const std::string &title, const std::string &author, int volume); // Constructor con parametros

        ~Tome(); // Destructor

        int getVolume() const; // Metodo para obtener el volumen del libro

        void setVolume(int volume); // Metodo para establecer el volumen del libro

        void displayInfo() const override; // Metodo para mostrar la informacion del libro    
        
};

#endif
