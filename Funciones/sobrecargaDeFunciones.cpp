#include <iostream>

// Función para sumar dos enteros
int sumar(int a, int b) {
    return a + b;
}

// Función para sumar tres enteros
int sumar(int a, int b, int c) {
    return a + b + c;
}

// Función para sumar dos números de punto flotante
double sumar(double a, double b) {
    return a + b;
}

int main() {
    std::cout << "Suma de enteros (2 + 3): " << sumar(2, 3) << std::endl;
    std::cout << "Suma de enteros (2 + 3 + 4): " << sumar(2, 3, 4) << std::endl;
    std::cout << "Suma de doubles (2.5 + 3.5): " << sumar(2.5, 3.5) << std::endl;
    return 0;
}
