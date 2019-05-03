#ifndef BIBLIOTECA_VOLUMEN_H
#define BIBLIOTECA_VOLUMEN_H
#include <string>

class Volumen {
protected:
    int idVol;
    std::string titulo;
public:
    Volumen(){}
    Volumen(std::string _titulo);
    Volumen(int _idVol, std::string _titulo);
    void mostrar();
};


#endif //BIBLIOTECA_VOLUMEN_H
