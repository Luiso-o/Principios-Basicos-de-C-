#include <iostream>

int main() {
    int edad;

    std::cout << "Ingresa tu edad: ";
    std::cin >> edad;

    if(edad >= 100){
        std::cout << "Eres demasiado mayor para entrar a este sitio!";
    }
    else if(edad < 0){
        std::cout << "Todavia no has nacido!!";
    } 
    else if(edad >= 18){
        std::cout << "Bienvenido al sitio";
    } 
    else{
        std::cout << "No tienes la edad suficiente para entrar";
    }

    return 0;
}