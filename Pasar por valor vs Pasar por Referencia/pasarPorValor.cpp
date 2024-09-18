#include <iostream>

void incrementarPorValor(int x) {
    x++; // Incrementa la copia del valor, no la variable original
}

int main() {
    int numero = 10;
    incrementarPorValor(numero);
    std::cout << "Numero despues de pasar por valor: " << numero << std::endl; // Imprime 10
    return 0;
}

/*int x: En la función incrementarPorValor,
 x es una copia del valor de numero.

x++: Incrementa solo la copia, no afecta a numero.*/