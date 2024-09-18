#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros = {1, 2, 3, 4, 5};

    // Iterar sobre el vector usando el bucle range-based for
    for (int num : numeros) {
        std::cout << "Elemento: " << num << std::endl;
    }

    return 0;
}
