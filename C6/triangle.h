#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <cmath>
#include "punto.h"

class Triangle {
    Punto vertex1;
    Punto vertex2;
    Punto vertex3;

public:
    Triangle() : vertex1(0, 0), vertex2(50, 30), vertex3(25, 10) {}

    Triangle(Punto v1, Punto v2, Punto v3) : vertex1(v1), vertex2(v2), vertex3(v3) {}

    double perimeter() {
        double side1 = sqrt(pow(vertex2.getX() - vertex1.getX(), 2) + pow(vertex2.getY() - vertex1.getY(), 2));
        double side2 = sqrt(pow(vertex3.getX() - vertex2.getX(), 2) + pow(vertex3.getY() - vertex2.getY(), 2));
        double side3 = sqrt(pow(vertex1.getX() - vertex3.getX(), 2) + pow(vertex1.getY() - vertex3.getY(), 2));
        return side1 + side2 + side3;
    }

    double area() {
        double side1 = sqrt(pow(vertex2.getX() - vertex1.getX(), 2) + pow(vertex2.getY() - vertex1.getY(), 2));
        double side2 = sqrt(pow(vertex3.getX() - vertex2.getX(), 2) + pow(vertex3.getY() - vertex2.getY(), 2));
        double side3 = sqrt(pow(vertex1.getX() - vertex3.getX(), 2) + pow(vertex1.getY() - vertex3.getY(), 2));
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
};

#endif