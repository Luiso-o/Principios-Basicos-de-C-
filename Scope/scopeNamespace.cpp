#include <iostream>

/*Descripción: Es el ámbito dentro de un espacio
de nombres definido por el usuario. Los espacios
de nombres ayudan a organizar y evitar conflictos
de nombres en grandes proyectos.

Ejemplo: Las variables y funciones dentro
de un espacio de nombres pueden ser accedidas
usando el nombre del espacio de nombres.*/

namespace MiEspacio {
    int x = 20;
}

int main() {
    std::cout << "x en MiEspacio: " << MiEspacio::x << std::endl;
    return 0;
}
