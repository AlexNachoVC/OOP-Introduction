#ifndef JUGADOR_H
#define JUGADOR_H

#include "personaje.h"

class Jugador : public Personaje {
private:
    double puntuacion;

public:
    // Constructor predeterminado
    Jugador();

    // Constructor parametrizado
    Jugador(std::string nombre, double salud, int nivel, double puntuacion);

    // Destructor
    ~Jugador();

    // Getter y Setter
    double getPuntuacion();
    void setPuntuacion(double puntuacion);

    // Método para aumentar puntuación
    void aumentarPuntuacion(double puntos);

    // Sobrescribir método para mostrar información
    void mostrarInformacion() override;

    // Método para resetear puntuación
    void resetearPuntuacion();

    // Método para jugar
    void jugar(double puntos);
};

#endif