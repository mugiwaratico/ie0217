#include <iostream>
#include "NumeroSerie.hpp"

int NumeroSerie::contador = 0;

NumeroSerie::NumeroSerie() {
  contador++;
  numeroSerie = contador;
}

void NumeroSerie::obtenerSerie() {
  std::cout << "Soy el objeto numero " << numeroSerie << std::endl;
}