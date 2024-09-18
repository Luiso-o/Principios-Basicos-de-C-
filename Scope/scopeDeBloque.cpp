#include <iostream>

/*Descripción: Es el ámbito dentro de un bloque
de código delimitado por llaves {}. Las variables
definidas dentro de un bloque están disponibles
solo dentro de ese bloque.

Ejemplo: Las variables definidas dentro de un if, for,
o while tienen un scope limitado a ese bloque. */

int main() {
    int x = 5;
    {
        int y = 10; // Scope de bloque
        std::cout << "x dentro del bloque: " << x << std::endl;
        std::cout << "y dentro del bloque: " << y << std::endl;
    }
    std::cout << "x fuera del bloque: " << x << std::endl;
    // std::cout << "y fuera del bloque: " << y << std::endl; // Error: 'y' no está definido aquí
    return 0;
}
