#include <iostream>
#include "Estudiante.hpp"


//creación del main y objetos clase Estudiante. Mediante manejo de errores
//se verifica una inserción correcta de los parámetros solicitados
int main() {
  std::string nombre;
  float calificacion;

  try {
    std::cout << "Ingrese el nombre del estudiante: ";
    std::getline(std::cin, nombre);

    std::cout << "Ingrese la calificación del estudiante: ";
    std::cin >> calificacion;

    Estudiante estudiante(nombre, calificacion);
    estudiante.MostrarInformacion();
  }
  catch (const std::invalid_argument& e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }

  return 0;
}