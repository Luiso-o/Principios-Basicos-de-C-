#include <iostream>
#include <algorithm> // Para std::stable_sort

/*std::stable_sort garantiza que los elementos
 con el mismo valor mantengan su orden relativo
  en el arreglo.*/

int main() {
    int numeros[] = {5, 3, 8, 1, 2};
    int tamaño = sizeof(numeros) / sizeof(numeros[0]);

    std::stable_sort(numeros, numeros + tamaño); // Ordenar el arreglo manteniendo el orden relativo de elementos iguales

    std::cout << "Arreglo ordenado con std::stable_sort: ";
    for (int i = 0; i < tamaño; ++i) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
