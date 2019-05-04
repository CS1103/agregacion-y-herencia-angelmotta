#ifndef BIBLIOTECA_LIBRO_H
#define BIBLIOTECA_LIBRO_H


#include "Volumen.h"

class Libro: public Volumen {
    int idLibro;
public:
    Libro(int _idVol, std::string _titulo, int _idLibro): Volumen{_idVol, _titulo}, idLibro{_idLibro} {}
    ~Libro();
    void mostrar();
};


#endif //BIBLIOTECA_LIBRO_H
