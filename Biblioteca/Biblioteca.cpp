#include "Biblioteca.h"

#include <iostream>

Biblioteca::Biblioteca(int _numLibros, int _numRevistas, int _maxLibros, int _maxRevistas) {
    numLibros = _numLibros;
    numRevistas = _numRevistas;
    maxLibros = _maxLibros;
    maxRevistas = _maxRevistas;
}

void Biblioteca::incluir(Volumen* puntero_vol){
    vector_vols.push_back(puntero_vol);
}


void Biblioteca::mostrarBiblioteca() {
    std::vector<Volumen *>::iterator ptr;
    for (ptr = vector_vols.begin(); ptr < vector_vols.end(); ptr++) {
        (*ptr)->mostrar();
        //std::cout << "value x: " << ptr->x << ", value y: " << ptr->y << ", carga: " << ptr->q << std::endl;
    }
}

Biblioteca::~Biblioteca() {
    std::vector<Volumen *>::iterator ptr;
    for (ptr = vector_vols.begin(); ptr < vector_vols.end(); ptr++) {
        delete *ptr;
    }
}
