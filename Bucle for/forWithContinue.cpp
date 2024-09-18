#include <iostream>

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue; // Omite el resto del bucle cuando i es 3
        }
        std::cout << "Iteración: " << i << std::endl;
    }
    return 0;

    /*continue:
    -Salta la iteración actual y continúa con la siguiente.
    -No termina el bucle, solo omite el resto del código dentro del bucle para la iteración actual.
    -Útil para omitir ciertas condiciones dentro de un bucle sin detener el bucle por completo.*/
}
