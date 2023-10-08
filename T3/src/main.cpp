#include <iostream>
#include "TablaFrecuencias.hpp"

using namespace std;

int main() {
    std::string nombreArchivo;
    TablaFrecuencias tabla;

    std::cout << "Ingrese el nombre del archivo de texto: ";
    std::getline(std::cin, nombreArchivo);

    tabla.generarTabla(nombreArchivo);
    tabla.mostrarTabla();

    return 0;
}