#ifndef BIBLIOTECA_BIBLIOTECA_H
#define BIBLIOTECA_BIBLIOTECA_H

#include "Volumen.h"
#include <vector>

class Biblioteca {
public:
    int maxLibros;
    int maxRevistas;
    int numLibros;
    int numRevistas;
    Biblioteca(){};
    Biblioteca(int _numLibros, int numRevistas, int _maxLibros, int _maxRevistas);
    std::vector<Volumen*> vector_vols;
    void incluir(Volumen* entrada);
};


#endif //BIBLIOTECA_BIBLIOTECA_H
