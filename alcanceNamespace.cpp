#include <iostream>

/*Sombreado (Shadowing): Ocurre cuando una variable 
local tiene el mismo nombre que una variable global 
o de un ámbito externo. La variable local "sombra" 
o "oculta" la variable con el mismo nombre fuera 
de su ámbito.*/

int x = 100; // Variable global

int main() {
    int x = 10; // Sombreado de la variable global
    std::cout << "x dentro de main: " << x << std::endl; // Imprime 10
    std::cout << "x global: " << ::x << std::endl; // Imprime 100, usando el operador de resolución de ámbito
    return 0;
}
