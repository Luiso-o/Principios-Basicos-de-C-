#include <iostream>
#include <algorithm> // Para std::fill

int main() {
    int arreglo[5];
    
    // Llenar el arreglo con el valor 7
    std::fill(std::begin(arreglo), std::end(arreglo), 7);
    
    // Imprimir el arreglo
    for (int i : arreglo) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
