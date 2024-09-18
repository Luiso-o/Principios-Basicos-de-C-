#include <iostream>


/*Descripción: Es el ámbito dentro de una clase.
 Los miembros de la clase (variables y funciones)
  tienen scope dentro de la clase, y la visibilidad
   de estos miembros puede ser controlada mediante
    especificadores de acceso (public, private, protected).

Ejemplo: Los atributos y métodos definidos dentro de
una clase son accesibles según su especificador de acceso.*/


class MiClase {
private:
    int x;
public:
    void setX(int valor) {
        x = valor;
    }
    void mostrarX() {
        std::cout << "x: " << x << std::endl;
    }
};

int main() {
    MiClase obj;
    obj.setX(10);
    obj.mostrarX();
    // std::cout << obj.x; // Error: 'x' es privado
    return 0;
}
