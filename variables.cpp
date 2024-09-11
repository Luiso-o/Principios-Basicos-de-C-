#include <iostream>

int main() {
    //variables 
    int entero = 5;
    double precio = 10.99654546;
    float peso = 25.3362;
    char calificacion = 'A';
    bool esEstudiante = false; //Los booleanos se representan en consola como 1 (true) o 0 (false)
    std::string nombre = "Luis";

    //variables constantes
    const double PI = 3.14159;

    double radio = 10;
    double circunferencia = 2 * PI * radio;

    //Imprimir en consola
    std::cout<<circunferencia <<" centimetros";       

    return 0;
}