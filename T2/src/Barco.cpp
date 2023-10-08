#include <iostream>
#include <vector>
#include "Barco.hpp"

Barco::Barco() : latitud(0, 0.0, 'N'), longitud(0, 0.0, 'E') {
}

void Barco::ingresarCoordenadas() {
  std::cout << "Ingrese las coordenadas de latitud: " << std::endl;
  latitud.ingresarAngulo();

  std::cout << "Ingrese las coordenadas de la longitud: " << std::endl;
  longitud.ingresarAngulo();
}

void Barco::mostrarInformacion() {
  std::cout << "Número de serie: ";
  numeroSerie.obtenerSerie();
  std::cout << "Latitud: ";
  latitud.mostrarAngulo();
  std::cout << "Longitud: ";
  longitud.mostrarAngulo();
}

void Barco::ordenarFlota(std::vector<Barco>& flota) {
 
} 