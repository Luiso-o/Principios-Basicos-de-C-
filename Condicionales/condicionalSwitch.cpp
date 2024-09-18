#include <iostream>

int main() {
    char calificacion;

    std::cout << "Calificacion: ";
    std::cin >> calificacion;

   switch (calificacion){
    case 'a':
        std::cout << "Lo hiciste genial!";
        break;
    case 'b':
        std::cout << "Lo hiciste muy bien";
        break;
    case 'c':
        std::cout << "Lo hiciste bien";
        break;
    case 'd':
        std::cout << "No lo hiciste bien";
        break;
    case 'f':
        std::cout << "Fallaste";
        break;
    default:
        std::cout << "Ingresa una nota valida";
        break;
   }
    
    return 0;
}