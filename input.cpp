#include <iostream>

//cout << (operador de insercion)
//cin >> (operador de extraccion)

int main() {

    std::string nombre;
    int edad;

    std::cout << "Cual es tu nombre? ";
    std::getline(std::cin >>std::ws, nombre); //entrada de cadena con espacios

    std::cout << "Cual es tu edad? ";
    std::cin >> edad;

    std::cout << "hola " << nombre <<"\n";
    std::cout << "Tu edad es " << edad <<" anos.";

    return 0;
}