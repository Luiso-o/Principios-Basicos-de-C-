#include <iostream>

//Obtener el Tamaño de una Estructura o Clase:

struct Persona {
    char nombre[50];
    int edad;
};

int main() {
    Persona p;
    std::cout << "Tamano de la estructura Persona: " << sizeof(p) << " bytes" << std::endl;
    return 0;
}
