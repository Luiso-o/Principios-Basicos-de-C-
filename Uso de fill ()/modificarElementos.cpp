#include <iostream>
#include <vector>
#include <algorithm> // Para std::fill

int main() {
    std::vector<int> vec(5); // Crea un vector de 5 elementos por defecto inicializados a 0
    
    // Llenar el vector con el valor 42
    std::fill(vec.begin(), vec.end(), 42);
    
    // Imprimir el vector
    for (int valor : vec) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    return 0;
}
