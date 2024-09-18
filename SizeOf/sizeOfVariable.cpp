#include <iostream>

//Obtener el Tamaño de una Variable:

int main() {
    int num = 10;
    double pi = 3.14;
    char letra = 'A';
    
    std::cout << "Tamano de num: " << sizeof(num) << " bytes" << std::endl;
    std::cout << "Tamano de pi: " << sizeof(pi) << " bytes" << std::endl;
    std::cout << "Tamano de letra: " << sizeof(letra) << " bytes" << std::endl;
    return 0;
}
