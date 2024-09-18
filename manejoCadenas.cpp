#include <iostream>
#include <string>

int main() {
    std::string texto = "Hola, mundo";

    // Obtener longitud
    std::cout << "Longitud: " << texto.size() << std::endl;

    // Acceder a un carácter
    std::cout << "Primer caracter: " << texto.at(0) << std::endl;

    // Concatenación
    std::string mensaje = texto + " - C++";
    std::cout << "Mensaje concatenado: " << mensaje << std::endl;

    // Subcadena
    std::string sub = mensaje.substr(0, 4);
    std::cout << "Subcadena: " << sub << std::endl;

    // Búsqueda
    size_t pos = mensaje.find("mundo");
    if (pos != std::string::npos) {
        std::cout << "'mundo' encontrado en la posicion: " << pos << std::endl;
    }

    // Reemplazo
    mensaje.replace(5, 5, "C++");
    std::cout << "Mensaje despues del reemplazo: " << mensaje << std::endl;

    return 0;
}
