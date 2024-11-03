#include <iostream>
#include "Avion.hpp"

int main() {
    
    Avion avion1("Diamond DA42", 4, 356, "EFA");

    // getter && details
    std::cout << "Avion 1 - Nume: " << avion1.getNume() 
              << ", Capacitate Locuri: " << avion1.getCapacitateLocuri() 
              << ", Viteza Maxima: " << avion1.getVitezaMaxima() 
              << ", Proprietar: " << avion1.getProprietar() << std::endl;

    // setter for modifications
    avion1.setProprietar("Lufthansa");
    std::cout << "Avion 1 nou proprietar: " << avion1.getProprietar() << std::endl;

    return 0;
}
