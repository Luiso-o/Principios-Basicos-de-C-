#include <iostream>

void imprimirArreglo(int arr[], int tamaño) {
    for (int i = 0; i < tamaño; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int tamaño = sizeof(numeros) / sizeof(numeros[0]); // Calcular el número de elementos

    imprimirArreglo(numeros, tamaño);

    return 0;
}
