#include "Volumen.h"
#include "Biblioteca.h"
#include <iostream>

Volumen::Volumen(int _idVol, std::string _titulo) {
    idVol = _idVol;
    titulo = _titulo;
};

void Volumen::mostrar(){
    std::cout << "Metodo Clase Padre: Clase Volumen" << std::endl;
    std::cout << std::endl;
}
