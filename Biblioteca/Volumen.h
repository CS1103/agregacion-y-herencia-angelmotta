#ifndef BIBLIOTECA_VOLUMEN_H
#define BIBLIOTECA_VOLUMEN_H
#include <string>
#include <vector>

class Volumen {
protected:
    int idVol;
    std::string titulo;
public:
    Volumen(){}
    Volumen(int _idVol, std::string _titulo);
    virtual void mostrar(std::vector<Volumen*> &vector_vols);
};


#endif //BIBLIOTECA_VOLUMEN_H
