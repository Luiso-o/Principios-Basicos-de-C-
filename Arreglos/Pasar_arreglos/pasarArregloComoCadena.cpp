#include <iostream>
#include <array>

void imprimirArreglo(const std::array<int, 5>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::array<int, 5> numeros = {1, 2, 3, 4, 5};

    imprimirArreglo(numeros);

    return 0;
}
