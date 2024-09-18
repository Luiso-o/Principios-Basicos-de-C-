#include <iostream>
#include <vector>
#include <algorithm> // Para std::fill

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Llenar una parte del vector con el valor 99
    std::fill(vec.begin() + 1, vec.begin() + 4, 99);
    
    // Imprimir el vector
    for (int valor : vec) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    return 0;
}
