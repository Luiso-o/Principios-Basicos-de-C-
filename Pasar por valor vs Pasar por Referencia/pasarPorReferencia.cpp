#include <iostream>

void incrementarPorReferencia(int& x) {
    x++; // Incrementa el valor original directamente
}

int main() {
    int numero = 10;
    incrementarPorReferencia(numero);
    std::cout << "Numero despues de pasar por referencia: " << numero << std::endl; // Imprime 11
    return 0;
}

/*int& x: x es una referencia a numero, no una copia.

x++: Incrementa el valor de numero directamente
porque x es una referencia a numero.*/
