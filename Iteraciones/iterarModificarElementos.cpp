#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros = {1, 2, 3, 4, 5};

    // Iterar sobre el vector y modificar los elementos
    for (int& num : numeros) {
        num *= 2; // Multiplica cada elemento por 2
    }

    // Imprimir los elementos modificados
    for (int num : numeros) {
        std::cout << "Elemento modificado: " << num << std::endl;
    }

    return 0;
}
