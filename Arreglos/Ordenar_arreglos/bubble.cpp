#include <iostream>

/*Bubble Sort compara elementos adyacentes
 y los intercambia si están en el orden
  incorrecto. Esto se repite hasta que el
   arreglo está ordenado.*/

void bubbleSort(int arr[], int tamaño) {
    for (int i = 0; i < tamaño - 1; ++i) {
        for (int j = 0; j < tamaño - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]); // Intercambiar elementos
            }
        }
    }
}

int main() {
    int numeros[] = {5, 3, 8, 1, 2};
    int tamaño = sizeof(numeros) / sizeof(numeros[0]);

    bubbleSort(numeros, tamaño);

    std::cout << "Arreglo ordenado con Bubble Sort: ";
    for (int i = 0; i < tamaño; ++i) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
