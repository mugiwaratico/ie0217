#include "header.hpp"
#include <iostream>

void mostrarTodasLasDefiniciones(PreguntaRespuesta preguntas[], int tamano) {
    for (int i = 0; i < tamano; i++) {
        std::cout << "Pregunta: " << preguntas[i].pregunta << std::endl;
        std::cout << "Respuesta breve: " << preguntas[i].respuestaBreve << std::endl;
        std::cout << "Respuesta detallada: " << preguntas[i].respuestaDetallada << std::endl;
        std::cout << "-------------------------" << std::endl;
    }
}

void hacerUnaPregunta(PreguntaRespuesta preguntas[], int tamano) {
    std::string pregunta;
    std::cout << "Ingrese su pregunta: ";
    std::getline(std::cin, pregunta);

    for (int i = 0; i < tamano; i++) {
        if (pregunta.find(preguntas[i].pregunta) != std::string::npos) {
            std::cout << "Respuesta breve: " << preguntas[i].respuestaBreve << std::endl;
            std::cout << "¿Desea obtener más información? (s/n): ";
            std::string opcion;
            std::getline(std::cin, opcion);
            if (opcion == "s") {
                extenderInformacion(preguntas, tamano, preguntas[i].pregunta);
            }
            return;
        }
    }

    std::cout << "No se encontró una respuesta para esa pregunta." << std::endl;
}

void extenderInformacion(PreguntaRespuesta preguntas[], int tamano, std::string pregunta) {
    for (int i = 0; i < tamano; i++) {
        if (pregunta == preguntas[i].pregunta) {
            std::cout << "Respuesta detallada: " << preguntas[i].respuestaDetallada << std::endl;
            return;
        }
    }
    std::cout << "No se encontró información adicional para esa pregunta." << std::endl;
}