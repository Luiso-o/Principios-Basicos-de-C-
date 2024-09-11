#include <iostream>

int main() {

    int calificacion = 75;

    calificacion >= 60 ? std::cout << "Pasaste!!" <<std::endl : std::cout << "No pasaste" <<std::endl; 

    calificacion % 2 ? std::cout << "Es par" <<std::endl : std::cout << "No es par" <<std::endl; 
    
    return 0;
}