#include <iostream>
#include <algorithm> // Para std::sort

int main() {
    int numeros[] = {5, 3, 8, 1, 2};
    int tamaño = sizeof(numeros) / sizeof(numeros[0]);

    std::sort(numeros, numeros + tamaño); // Ordenar el arreglo en orden ascendente

    std::cout << "Arreglo ordenado: ";
    for (int i = 0; i < tamaño; ++i) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
