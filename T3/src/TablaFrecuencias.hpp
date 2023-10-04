#ifndef TABLAFRECUENCIAS_H
#define TABLAFRECUENCIAS_H

using namespace std;

#include <map>
#include <string>

class TablaFrecuencias {
private:
    std::map<std::string, int> frecuencias;

public:
    void generarTabla(const std::string& nombreArchivo);
    void mostrarTabla();
};

#endif