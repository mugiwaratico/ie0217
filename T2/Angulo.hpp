#ifndef ANGULO_H
#define ANGULO_H

class Angulo {
private:
  int grados;
  float minutos;
  char direccion;

public:
  Angulo(int grados, float minutos, char direccion);
  void ingresarAngulo();
  void mostrarAngulo();
};

#endif