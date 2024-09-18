#include <iostream>

int buscarElemento(const int arr[], int tamaño, int objetivo) {
    for (int i = 0; i < tamaño; ++i) {
        if (arr[i] == objetivo) {
            return i; // Devuelve el índice del elemento encontrado
        }
    }
    return -1; // Devuelve -1 si el elemento no se encuentra
}

int main() {
    int numeros[] = {3, 7, 2, 5, 8};
    int tamaño = sizeof(numeros) / sizeof(numeros[0]);
    int objetivo = 5;

    int índice = buscarElemento(numeros, tamaño, objetivo);

    if (índice != -1) {
        std::cout << "Elemento " << objetivo << " encontrado en índice " << índice << std::endl;
    } else {
        std::cout << "Elemento " << objetivo << " no encontrado" << std::endl;
    }

    return 0;
}
