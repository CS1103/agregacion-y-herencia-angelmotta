#include <iostream>
#include "Revista.h"
#include "Biblioteca.h"
#include "Volumen.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    //Revista r1(1,"Pc World",1);
    //Revista r2(2,"Economy",2);
    //Revista r3(3,"Geeks",3);
    Biblioteca biblio(0,0,10,10);
    Volumen* puntero = new Revista(1,"Pc World",1);
    Volumen* puntero2 = new Revista(2,"Economy",2);
    biblio.incluir(puntero);
    biblio.incluir(puntero2);
    puntero->mostrar(biblio.vector_vols);         // Polimorfismo invocando metodo de la clase Padre Volumen
    Revista* pointer_revista = dynamic_cast<Revista*>(puntero);
    pointer_revista->mostrar(1);        // Polimorfismo invocando clase Hija
    return 0;
}
