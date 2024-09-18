#include <iostream>

//Obtener el Tamaño de un Arreglo:

int main() {
    int arreglo[10];
    std::cout << "Tamano del arreglo: " << sizeof(arreglo) << " bytes" << std::endl;
    std::cout << "Numero de elementos en el arreglo: " << sizeof(arreglo) / sizeof(arreglo[0]) << std::endl;
    return 0;
}
