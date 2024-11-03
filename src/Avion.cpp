#include "Avion.hpp"
#include <cstring> 

// Constructor 
Avion::Avion(const char* nume, int capacitate_locuri, int viteza_maxima, const char* proprietar)
    : capacitate_locuri(capacitate_locuri), viteza_maxima(viteza_maxima) {

    // Alocare dinamica pentru nume
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);

    // Alocare dinamica pentru proprietar
    this->proprietar = new char[strlen(proprietar) + 1];
    strcpy(this->proprietar, proprietar);

    std::cout << "Constructorul a fost apelat pentru avionul: " << this->nume << std::endl;
}

// Destructor
Avion::~Avion() {
    std::cout << "Destructorul a fost apelat pentru avionul: " << this->nume << std::endl;
    
    // Eliberarea memoriei in cadrul deconstructorului
    delete[] nume;
    delete[] proprietar;
}
// afisare informatii
void Avion::afiseazaInformatii() const {
    std::cout << "Avion: " << nume << ", Capacitate locuri: " << capacitate_locuri
              << ", Viteza maxima: " << viteza_maxima << " km/h, Proprietar: " << proprietar << std::endl;
}
