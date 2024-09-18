#include <iostream>
#include <algorithm> // Para std::sort y std::greater

int main() {
    int numeros[] = {5, 3, 8, 1, 2};
    int tamaño = sizeof(numeros) / sizeof(numeros[0]);

    std::sort(numeros, numeros + tamaño, std::greater<int>()); // Ordenar en orden descendente

    std::cout << "Arreglo ordenado en orden descendente: ";
    for (int i = 0; i < tamaño; ++i) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
