#include <iostream>
#include <algorithm> // Para std::binary_search

int main() {
    int numeros[] = {3, 5, 7, 8, 9}; // Debe estar ordenado
    int tamaño = sizeof(numeros) / sizeof(numeros[0]);
    int objetivo = 7;

    bool encontrado = std::binary_search(std::begin(numeros), std::end(numeros), objetivo);

    if (encontrado) {
        std::cout << "Elemento " << objetivo << " encontrado" << std::endl;
    } else {
        std::cout << "Elemento " << objetivo << " no encontrado" << std::endl;
    }

    return 0;
}
