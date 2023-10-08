#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <iostream>
#include <string>
#include <stdexcept>


//Header de la clase estudiante con los atributos y métodos solicitados

class Estudiante {
private:
  std::string nombre;
  float* calificacion;

public:
  Estudiante(const std::string& nombre, float calificacion);
  ~Estudiante();
  void MostrarInformacion();
};

#endif