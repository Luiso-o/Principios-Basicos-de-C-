#include <iostream>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            std::cout << "Numero encontrado: " << i << std::endl;
            break; // Termina el bucle aquí
        }
        std::cout << "Iteracion: " << i << std::endl;
    }
    std::cout << "Bucle terminado." << std::endl;
    return 0;

    /*Break:
    -Termina el bucle completo.
    -El control del programa pasa inmediatamente a la línea después del bucle.
    -Útil para salir de un bucle cuando ya no es necesario continuar.*/
}
