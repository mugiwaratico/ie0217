#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <cctype>
#include <cstring>
#include <algorithm>
#include "TablaFrecuencias.hpp"

void eliminarSignosPuntuacion(std::string& palabra) {
    const char* puntuacion = ".,:;!?";

    // Eliminar signos de puntuación al final de la palabra
    while (!palabra.empty() && std::strchr(puntuacion, palabra.back()) != nullptr) {
        palabra.pop_back();
    }
}


// Funcion que permite convertir los caracteres en minúscula de la palabra
void convertirMinusculas(std::string& palabra) {
    std::transform(palabra.begin(), palabra.end(), palabra.begin(), [](unsigned char c) {
        return std::tolower(c);
    });
}


// Funcion que permite crear la tabla a partir del archivo indicado por el usuario
void TablaFrecuencias::generarTabla(const std::string& nombreArchivo) {
    std::ifstream archivo(nombreArchivo);
    std::string palabra;

    if (!archivo.is_open()) {
        std::cerr << "Error al abrir el archivo." << std::endl;
        return;
    }

    while (archivo >> palabra) {
        eliminarSignosPuntuacion(palabra);
        convertirMinusculas(palabra);
        frecuencias[palabra]++;
    }

    archivo.close();
}

// Funcion que permite mostrar la tabla con sus elementos
void TablaFrecuencias::mostrarTabla() {
    for (const auto& par : frecuencias) {
        std::cout << par.first << ": " << par.second << std::endl;
    }
}