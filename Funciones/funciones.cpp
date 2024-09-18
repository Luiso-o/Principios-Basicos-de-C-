#include <iostream>

// Declaración de la función
int sumar(int a, int b);

int main() {
    int x = 5;
    int y = 10;
    int resultado = sumar(x, y); // Llamada a la función
    std::cout << "La suma de " << x << " y " << y << " es " << resultado << std::endl;
    return 0;
}

// Definición de la función
int sumar(int a, int b) {
    return a + b;
}
