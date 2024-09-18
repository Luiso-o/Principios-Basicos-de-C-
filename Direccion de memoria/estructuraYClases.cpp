#include <iostream>

struct Persona {
    std::string nombre;
    int edad;
};

int main() {
    Persona persona = {"Alice", 30};
    Persona* puntero = &persona;

    std::cout << "Direccion de memoria de 'persona': " << &persona << std::endl;
    std::cout << "Direccion de memoria de 'nombre': " << &(puntero->nombre) << std::endl;
    std::cout << "Direccion de memoria de 'edad': " << &(puntero->edad) << std::endl;

    return 0;
}
