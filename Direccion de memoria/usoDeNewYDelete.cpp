#include <iostream>

int main() {
    // Asignar memoria dinámica para un entero
    int* puntero = new int(10); // 'puntero' apunta a una variable entera con valor 10

    std::cout << "Direccion de memoria de 'puntero': " << puntero << std::endl;
    std::cout << "Valor apuntado por 'puntero': " << *puntero << std::endl;

    delete puntero; // Liberar la memoria

    return 0;
}
