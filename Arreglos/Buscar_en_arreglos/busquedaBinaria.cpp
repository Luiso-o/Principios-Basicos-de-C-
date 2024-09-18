#include <iostream>
#include <algorithm> // Para std::sort

int buscarElementoBinario(const int arr[], int tamaño, int objetivo) {
    int bajo = 0;
    int alto = tamaño - 1;

    while (bajo <= alto) {
        int medio = bajo + (alto - bajo) / 2;

        if (arr[medio] == objetivo) {
            return medio; // Elemento encontrado
        }
        if (arr[medio] < objetivo) {
            bajo = medio + 1;
        } else {
            alto = medio - 1;
        }
    }
    return -1; // Elemento no encontrado
}

int main() {
    int numeros[] = {3, 5, 7, 8, 9}; // Debe estar ordenado para búsqueda binaria
    int tamaño = sizeof(numeros) / sizeof(numeros[0]);
    int objetivo = 7;

    int índice = buscarElementoBinario(numeros, tamaño, objetivo);

    if (índice != -1) {
        std::cout << "Elemento " << objetivo << " encontrado en índice " << índice << std::endl;
    } else {
        std::cout << "Elemento " << objetivo << " no encontrado" << std::endl;
    }

    return 0;
}
