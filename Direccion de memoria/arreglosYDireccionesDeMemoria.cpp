#include <iostream>

int main() {
    int arreglo[3] = {1, 2, 3};

    // Obtener la dirección de memoria del primer elemento
    std::cout << "Direccion de memoria de 'arreglo': " << arreglo << std::endl;
    std::cout << "Direccion de memoria del primer elemento (arreglo[0]): " << &arreglo[0] << std::endl;

    return 0;
}
