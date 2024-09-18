#include <iostream>
#include <vector>

void imprimirArreglo(const std::vector<int>& vec) {
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> numeros = {1, 2, 3, 4, 5};

    imprimirArreglo(numeros);

    return 0;
}
