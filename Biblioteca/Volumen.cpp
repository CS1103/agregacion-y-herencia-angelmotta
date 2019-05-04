#include "Volumen.h"
#include "Biblioteca.h"
#include <iostream>

Volumen::Volumen(int _idVol, std::string _titulo) {
    idVol = _idVol;
    titulo = _titulo;
};

void Volumen::mostrar(std::vector<Volumen*> &vector_vols){
    std::cout << "Metodo Clase Padre: Clase Volumen" << std::endl;
    std::vector<Volumen *>::iterator ptr;
    for (ptr = vector_vols.begin(); ptr < vector_vols.end(); ptr++) {
        std::cout << "VOLUMEN: " << (*ptr)->titulo << std::endl;
    }
    std::cout << std::endl;
}