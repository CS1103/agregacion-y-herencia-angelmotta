#include "catch.hpp"
#include "Biblioteca.h"


SCENARIO("Tracking Biblioteca"){
    GIVEN("Validacion numero de Revistas"){
        WHEN("Empieza la biblioteca con cero Revistas"){
            Volumen* puntero = new Revista(1,"Pc World",1);
            Volumen* puntero2 = new Revista(2,"Economy",2);
            Biblioteca biblio(0,0,10,10);
            biblio.incluir(puntero);
            biblio.incluir(puntero2);
            THEN("Total de Revistas es 2"){
                REQUIRE(biblio.numRevistas == 2);
            }
        }
    }
}