#include <iostream>

int main() {
    for (int i = 1; i <= 5; i++) { // Bucle externo
        for (int j = 1; j <= 5; j++) { // Bucle interno
            std::cout << i * j << "\t"; // Imprime el producto de i y j
        }
        std::cout << std::endl; // Salto de línea al final de cada fila
    }
    return 0;
}
