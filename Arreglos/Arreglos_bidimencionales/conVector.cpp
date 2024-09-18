#include <iostream>
#include <vector>

int main() {
    // Crear un arreglo bidimensional usando std::vector
    std::vector<std::vector<int>> matriz = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Recorrer el arreglo bidimensional
    for (const auto& fila : matriz) {
        for (int valor : fila) {
            std::cout << valor << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
