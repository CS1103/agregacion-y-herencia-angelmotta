#include "Volumen.h"
#include <iostream>

Volumen::Volumen(int _idVol, std::string _titulo) {
    idVol = _idVol;
    titulo = _titulo;
};

void mostrar(){
    std::cout << "test print" << std::endl;
}