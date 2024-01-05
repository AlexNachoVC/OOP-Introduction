#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <string>

class Personaje {
private:
    std::string nombre;
    double salud;
    int nivel;

public:
    // Constructor predeterminado
    Personaje();

    // Constructor parametrizado
    Personaje(std::string nombre, double salud, int nivel);

    // Destructor
    ~Personaje();

    // Getters
    std::string getNombre();
    double getSalud();
    int getNivel();

    // Setters
    void setNombre(std::string nombre);
    void setSalud(double salud);
    void setNivel(int nivel);

    // Método para mostrar información
    virtual void mostrarInformacion();

    // Método para recibir daño
    void recibirDanio(double danio);

    // Método para subir de nivel
    void subirNivel();
};

#endif