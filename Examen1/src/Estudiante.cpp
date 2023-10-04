#include <iostream>
#include "Estudiante.hpp"

//Implementación de clase estudiante con el constructor solicitado
Estudiante::Estudiante(const std::string& nombre, float calificacion) {
  this->nombre = nombre;

  this->calificacion = new float;

  
  //Verificación de calificación en el rango correcto
  if (calificacion < 0 || calificacion > 100) {
    throw std::invalid_argument("La calificación debe estar entre 0 y 100");
  }

  *(this->calificacion) = calificacion;
}

//Destructor y limpieza de memoria
Estudiante::~Estudiante() {
  delete calificacion;
}

//Método para mostrar información del estudiante
void Estudiante::MostrarInformacion() {
  std::cout << "Nombre: " << nombre << std::endl;
  std::cout << "Calificación: " << *calificacion << std::endl;
}