#include <iostream>

int main(){

    int estudiantes = 20;

    //Suma
    estudiantes++;
    std::cout << estudiantes << std::endl;

    //Resta
    estudiantes--;
    std::cout << estudiantes << std::endl;

    //Multiplicacion
    estudiantes *= 2;
    std::cout << estudiantes << std::endl;

    //Division
    estudiantes /= 2;
    std::cout << estudiantes << std::endl;

    //Modulo
    estudiantes %= 2;
    std::cout << estudiantes << std::endl;

    return 0;
}