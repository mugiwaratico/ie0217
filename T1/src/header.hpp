#ifndef HEADER_HPP
#define HEADER_HPP

#include <string>

//creación de estructura con las opciones
struct PreguntaRespuesta {
    std::string pregunta;
    std::string respuestaBreve;
    std::string respuestaDetallada;
};

void mostrarTodasLasDefiniciones(PreguntaRespuesta preguntas[], int tamano);
void hacerUnaPregunta(PreguntaRespuesta preguntas[], int tamano);
void extenderInformacion(PreguntaRespuesta preguntas[], int tamano, std::string pregunta);


#endif