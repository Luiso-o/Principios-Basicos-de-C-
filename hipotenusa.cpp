#include <iostream>
#include <cmath>

//Calculando la hipotenusa de un triangulo rectangulo

int main() {

    double a;
    double b;
    double c;

    std::cout << "Ingrese el lado A: ";
    std::cin >> a;

    std::cout << "Ingrese el lado B: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "C: " << c;

    return 0;
}