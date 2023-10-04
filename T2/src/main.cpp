#include <iostream>
#include "Angulo.hpp"
#include "NumeroSerie.hpp"
#include "Barco.hpp"
using namespace std;

int main() {
 std::vector<Barco> flota;
  int opcion;

  do {
    std::cout << "Bienvenido, querido usuario <3, al sistema de gestión de flota de barcos" << std::endl;
    std::cout << "Mení principal" << std::endl;
    std::cout << "1. Añadir un nuevo barco a la flota" << std::endl;
    std::cout << "2. Eliminar un barco de la flota" << std::endl;
    std::cout << "3. Mostrar flota" << std::endl;
    std::cout << "4. Salir" << std::endl;
    std::cout << "Seleccione una opción";
    std::cin >> opcion;

    switch (opcion) {
      case 1: {
        Barco barco;
        barco.ingresarCoordenadas();
        flota.push_back(barco);
        std::cout << "Barco añadido a la flota." << std::endl;
        break;
      }

      case 2: {
        if (flota.empty()) {
          std::cout << "La flota está vacía." << std::endl;
        } else {
          int indice;
          std::cout << "Ingrese el número de serie del barco a eliminar (0-" << flota.size()-1 << "): ";
          std::cin >> indice;

          if (indice >= 0 && indice < flota.size()) {
            flota.erase(flota.begin() + indice);
            std::cout << "Barco eliminado de la flota." << std::endl;
          } else {
            std::cout << "Índice no válido." << std::endl;
          }
        }
        break;
      }

      case 3: {
        if (flota.empty()) {
          std::cout << "Flota vacía." << std::endl;
        } else {
          std::cout << "Flota: " << std::endl;
          for (const Barco& barco : flota) {
            std::cout << std::endl;
          }
        }
        break;
      }
      case 4: {
        std::cout << "Saliendo del programa" << std::endl;
        break;
      }
      default: {
        std::cout << "Por favor, ingrese una opción válida." << std::endl;
        break;
      }
    }

    std::cout << std::endl;
  } while (opcion != 4);

  return 0;
}