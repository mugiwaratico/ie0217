#ifndef BARCO_H
#define BARCO_H

#include <vector>
#include "Angulo.hpp"
#include "NumeroSerie.hpp"

class Barco {
private:
  NumeroSerie numeroSerie;
  Angulo latitud;
  Angulo longitud;

public:
  Barco();
  void ingresarCoordenadas();
  void mostrarInformacion();
  static void ordenarFlota(std::vector<Barco>& flota);
};

#endif