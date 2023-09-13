#include "header.hpp"
#include <iostream>

int main() {
    const int tamano = 5;
    PreguntaRespuesta preguntas[tamano] = {
        {"¿Cuál es la principal diferencia entre C y C++?", "La principal diferencia es que C++ es un lenguaje orientado a objetos, mientras que C no lo es.", "Además de ser orientado a objetos, C++ también tiene características adicionales como el manejo de excepciones y plantillas."},
        // Aquí puedes agregar más preguntas y respuestas
    };

    while (true) {
        std::cout << "Opciones:" << std::endl;
        std::cout << "a. Mostrar todas las definiciones almacenadas." << std::endl;
        std::cout << "b. Hacer una pregunta." << std::endl;
        std::cout << "Ingrese una opción: ";
        std::string opcion;
        std::getline(std::cin, opcion);

        if (opcion == "a") {
            mostrarTodasLasDefiniciones(preguntas, tamano);
        } else if (opcion == "b") {
            hacerUnaPregunta(preguntas, tamano);
        } else {
            std::cout << "Opción inválida. Inténtelo nuevamente." << std::endl;
        }
    }

    return 0;
}