#include <iostream>
#include <cmath>

int main(){

    double x = 10;
    double y = 4;
    double z;

    //Variable con el valor mas grande
    z = std::max(x, y);
    std::cout << z <<std::endl;

    //Variable con el valor mas pequeno
    z = std::min(x, y);
    std::cout << z <<std::endl;

    //elevar a una potencia
    z = std::pow(2, 4);
    std::cout << z <<std::endl;

    //Raiz cuadrada
    z = std::sqrt(9);
    std::cout << z <<std::endl;

    //Valor absoluto
    z = std::abs(-3);
    std::cout << z <<std::endl;

    //Valor redondeado menor a .5 hacia abajo y mayor a .5 hacia arriba
    z = std::round(3.55);
    std::cout << z <<std::endl;

    //Valor redondeado hacia arriba
    z = std::ceil(3.99);
    std::cout << z <<std::endl;

    //Valor redondeado hacia abajo
    z = std::floor(3.99);
    std::cout << z <<std::endl;

    return 0;
}