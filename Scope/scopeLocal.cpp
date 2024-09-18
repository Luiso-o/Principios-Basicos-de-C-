#include <iostream>

/*Descripción: Es el ámbito en el que una variable,
función o identificador es válido dentro de una función 
o bloque específico.

Ejemplo: Las variables declaradas dentro de una función
son locales a esa función y no pueden ser accedidas desde
fuera de ella.*/

void funcion() {
    int x = 10; // Scope local
    std::cout << "x dentro de la funcion: " << x << std::endl;
}

int main() {
    // std::cout << x; // Error: 'x' no está definido aquí
    funcion();
    return 0;
}
