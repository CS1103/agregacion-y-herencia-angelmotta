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

    auto pointer_cast = dynamic_cast<Revista*>(puntero_vol);
    if(pointer_cast != nullptr){
        //std::cout << "Es puntero tipo Revista" << std::endl;
        numRevistas += 1;
    }
    else{
        //std::cout << "Es puntero tipo Libro" << std::endl;
        numLibros += 1;
    }
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
