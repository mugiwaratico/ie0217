#include <iostream>
#include "Angulo.hpp"
using namespace std;

Angulo::Angulo(int grados, float minutos, char direccion) {
  this->grados = grados;
  this->minutos = minutos;
  this->direccion = direccion;
}

void Angulo::ingresarAngulo() {
  std::cout << "Ingrese los grados: ";
  std::cin >> grados;

  std::cout << "Ingrese los minutos: ";
  std::cin >> minutos;

  std::cout << "Ingrese la direccion (N, S, E, W): ";
  std::cin >> direccion;
}

void Angulo::mostrarAngulo() {
  std::cout << grados << "\370" << minutos << "'" << direccion << std::endl;
}