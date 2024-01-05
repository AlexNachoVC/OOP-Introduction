#include <cmath>
#include "punto.h"
#include <iostream>
#include "triangle.h"

int main() {
    Triangle t;
    std::cout << "Perimeter: " << t.perimeter() << std::endl;
    std::cout << "Area: " << t.area() << std::endl;
    return 0;
}