#include <iostream>
#include "Avion.hpp"

int main() {
    //Avion folosind constructorul
    Avion avion1("Diamond DA42", 4, 356, "EFA");

    avion1.afiseazaInformatii();

    return 0; 
}