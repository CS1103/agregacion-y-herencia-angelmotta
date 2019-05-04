#ifndef BIBLIOTECA_BIBLIOTECA_H
#define BIBLIOTECA_BIBLIOTECA_H

#include "Volumen.h"
#include "Revista.h"
#include <vector>

class Biblioteca {
public:
    int maxLibros;
    int maxRevistas;
    int numLibros;
    int numRevistas;
    std::vector<Volumen*> vector_vols;

    Biblioteca(){};
    Biblioteca(int _numLibros, int _numRevistas, int _maxLibros, int _maxRevistas);
    ~Biblioteca();
    void incluir(Volumen* puntero_vol);
    void mostrarBiblioteca();
};


#endif //BIBLIOTECA_BIBLIOTECA_H
