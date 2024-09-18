#include <iostream>

void imprimirPorReferenciaConstante(const int& x) {
    std::cout << "Valor de x: " << x << std::endl; // Solo lectura
}

int main() {
    int numero = 10;
    imprimirPorReferenciaConstante(numero);
    return 0;
}

/*const int& x: x es una referencia constante 
a numero, lo que significa que no puedes modificar
 numero dentro de la función.*/