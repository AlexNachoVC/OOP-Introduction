#include "book.h"
#include <iostream>

// Constructor por defecto
Book::Book() : title(""), author("") {}

// Constructor con parametros
Book::Book(const std::string &title, const std::string &author) : title(title), author(author) {}

// Destructor
Book::~Book() {}

// Metodo para obtener el titulo del libro
std::string Book::getTitle() const {
    return title;
}

// Metodo para obtener el autor del libro
std::string Book::getAuthor() const {
    return author;
}

// Metodo para establecer el titulo del libro   
void Book::setTitle(const std::string &title) {
    this->title = title;
}

// Metodo para establecer el autor del libro
void Book::setAuthor(const std::string &author) {
    this->author = author;
}

// Metodo para mostrar la informacion del libro
void Book::displayInfo() const {
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author: " << author << std::endl;
}
