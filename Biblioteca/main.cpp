#include <iostream>
#include "Revista.h"
#include "Biblioteca.h"
#include "Volumen.h"
#include "Libro.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    //Revista r1(1,"Pc World",1);
    //Revista r2(2,"Economy",2);
    //Revista r3(3,"Geeks",3);
    Biblioteca biblio(0,0,10,10);
    Volumen* puntero = new Revista(1,"Pc World",1);
    Volumen* puntero2 = new Revista(2,"Economy",2);
    Volumen* puntero3 = new Libro(3, "CS fundamentals Book", 1);
    Volumen* puntero4 = new Libro(4, "Data Structures Book", 1);
    biblio.incluir(puntero);
    biblio.incluir(puntero2);
    biblio.incluir(puntero3);
    biblio.incluir(puntero4);
    biblio.mostrarBiblioteca();
    puntero2->mostrar();

    //Revista* pointer_revista = dynamic_cast<Revista*>(puntero);
    //pointer_revista->mostrar(biblio.vector_vols);        // Polimorfismo invocando clase Hija
    return 0;
}
