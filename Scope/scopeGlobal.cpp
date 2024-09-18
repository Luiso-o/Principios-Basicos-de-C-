#include <iostream>

/*Descripción: Es el ámbito en el que una variable
o función es accesible desde cualquier parte del programa,
siempre y cuando no haya un conflicto con nombres en
scopes locales.

Ejemplo: Las variables y funciones declaradas
fuera de cualquier función tienen un scope global.*/

int x = 10; // Scope global

void funcion() {
    std::cout << "x dentro de la funcion: " << x << std::endl;
}

int main() {
    std::cout << "x dentro de main: " << x << std::endl;
    funcion();
    return 0;
}
