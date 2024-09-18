#include <iostream>

/*En C++, los operadores lógicos se utilizan para 
realizar operaciones booleanas. Estos operadores
permiten combinar o invertir expresiones lógicas.*/

//AND lógico (&&): Devuelve true si ambas expresiones son verdaderas.
//OR lógico (||): Devuelve true si al menos una de las expresiones es verdadera.
//NOT lógico (!): Invierte el valor de una expresión booleana. Si la expresión es true, devuelve false y viceversa.

int main(){
    bool a = true;
    bool b = false;

    if (a && !b) {
        std::cout << "La expresion es verdadera." << std::endl;
    } else {
        std::cout << "La expresion es falsa." << std::endl;
    }

    return 0;
}