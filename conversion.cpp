#include <iostream>

int main(){

    /*double x = (int)3.14;
    std::cout << x<<std::endl;
    std::cout << (char)100;*/

    int PCorrecta = 8;
    int Total = 10;

    double puntaje = PCorrecta / (double)Total * 100;
    std::cout << puntaje << "%";

    return 0;
}