#include <iostream>

int main() {
    int arreglo[3] = {1, 2, 3};
    int* puntero = arreglo; // puntero apunta al primer elemento del arreglo

    for (int i = 0; i < 3; ++i) {
        std::cout << "Elemento " << i << ": " << *(puntero + i) << std::endl;
    }

    return 0;
}
