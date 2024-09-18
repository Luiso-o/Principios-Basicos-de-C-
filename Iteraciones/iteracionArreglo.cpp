#include <iostream>

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int tamaño = sizeof(numeros) / sizeof(numeros[0]); // Calcular el número de elementos

    for (int i = 0; i < tamaño; ++i) {
        std::cout << "Elemento en indice " << i << ": " << numeros[i] << std::endl;
    }

    return 0;
}
