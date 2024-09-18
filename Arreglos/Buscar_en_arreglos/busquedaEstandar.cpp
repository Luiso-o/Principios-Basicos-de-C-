#include <iostream>
#include <algorithm> // Para std::find

int main() {
    int numeros[] = {3, 7, 2, 5, 8};
    int tamaño = sizeof(numeros) / sizeof(numeros[0]);
    int objetivo = 5;

    auto it = std::find(std::begin(numeros), std::end(numeros), objetivo);

    if (it != std::end(numeros)) {
        int índice = std::distance(std::begin(numeros), it);
        std::cout << "Elemento " << objetivo << " encontrado en índice " << índice << std::endl;
    } else {
        std::cout << "Elemento " << objetivo << " no encontrado" << std::endl;
    }

    return 0;
}
