#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> edades = {{"Alice", 30}, {"Bob", 25}, {"Charlie", 35}};

    // Iterar sobre el mapa usando el bucle range-based for
    for (const auto& pareja : edades) {
        std::cout << "Nombre: " << pareja.first << ", Edad: " << pareja.second << std::endl;
    }

    return 0;
}
