#include <iostream>
#include "Avion.hpp"

int main() {
    //Avion folosind constructorul
    Avion avion1("Diamond DA42", 4, 356, "EFA");

    avion1.afiseazaInformatii();

    // Crearea unui nou avion folosind copy constructorul
    Avion avion2 = avion1;

    avion2.afiseazaInformatii();

    return 0; 
}
