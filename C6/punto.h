#ifndef PUNTO_H
#define PUNTO_H

// using namespace std;     Es prescindible porque no usamos ningun string, output o input

class Punto {
    private : 
        float x;
        float y;
    
    public :
        Punto();
        Punto (float x, float y);  //Función llamada "Punto"
        ~Punto(){} //Destructor
        
        float getX();
        float getY();

        void setX(float x);
        void setY(float Y);
}; 

Punto::Punto(float x, float y){
    this->x = x;  // "this ->" es un apuntador que hace referencia a los atributos de la clase
//  en este caso, es el quevalene a poner x=punmtoX  
    this->y= y;
}

float Punto::getX(){
    return x;
}

float Punto::getY(){
    return y;
}

void Punto::setX(float x) {
    this -> x = x;
}

void Punto::setY(float y) {
    this -> y = y;
}
#endif