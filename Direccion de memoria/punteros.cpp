#include <iostream>

int main() {
    int numero = 42;
    int* puntero = &numero; // 'puntero' almacena la dirección de 'numero'
    
    std::cout << "Direccion de memoria almacenada en 'puntero': " << puntero << std::endl;
    std::cout << "Valor de 'numero' a traves del puntero: " << *puntero << std::endl;

    return 0;
}
