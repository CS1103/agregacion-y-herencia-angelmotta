#ifndef BIBLIOTECA_REVISTA_H
#define BIBLIOTECA_REVISTA_H

#include <string>
#include "Volumen.h"

class Revista: public Volumen{
    int idRevista;
public:
    Revista(int _idVol, std::string _titulo, int _idRevista): Volumen{_idVol, _titulo}, idRevista{_idRevista} {}
};


#endif //BIBLIOTECA_REVISTA_H
