#include <iostream>

int main() {
    int numeros[5] = {1, 2, 3, 4, 5};
    
    std::cout << "Primer elemento: " << numeros[0] << std::endl;
    std::cout << "Segundo elemento: " << numeros[1] << std::endl;
    
    // Modificar el valor del tercer elemento
    numeros[2] = 10;
    std::cout << "Nuevo valor del tercer elemento: " << numeros[2] << std::endl;

    return 0;
}
