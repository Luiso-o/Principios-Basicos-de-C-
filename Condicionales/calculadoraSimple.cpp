#include <iostream>

int main() {
    char operador;
    double num1;
    double num2;
    double resultado;

    std::cout << " Calculadora : \n";

    std::cout << "Ingrese (+ - * /): ";
    std::cin >> operador;

    std::cout << "Ingrese la primera cantidad: ";
    std::cin >> num1;

    std::cout << "Ingrese la segunda cantidad: ";
    std::cin >> num2;

    switch (operador)
    {
    case '+':
        resultado = num1 + num2;
        std::cout << "El resultado es: " <<resultado <<std::endl;
        break;
    case '-':
        resultado = num1 - num2;
        std::cout << "El resultado es: " <<resultado <<std::endl;
        break;
    case '*':
        resultado = num1 * num2;
        std::cout << "El resultado es: " <<resultado <<std::endl;
        break;
    case '/':
        resultado = num1 / num2;
        std::cout << "El resultado es: " <<resultado <<std::endl;
        break;
    default:
        std::cout << "Error \n";
        break;
    }

    std::cout << " ______________";

    return 0;
}