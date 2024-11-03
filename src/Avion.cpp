#include "Avion.hpp"

// Constructor
Avion::Avion(std::string nume, int capacitate_locuri, int viteza_maxima, std::string proprietar)
    : nume(nume), capacitate_locuri(capacitate_locuri), viteza_maxima(viteza_maxima), proprietar(proprietar) {
    std::cout << "Constructorul a fost apelat pentru avionul: " << nume << std::endl;
}

// Copy constructor
//suprascrierea copy constructor-ului asigura copierea corecta a tuturor membrilor
Avion::Avion(const Avion& other)
    : nume(other.nume), capacitate_locuri(other.capacitate_locuri),
      viteza_maxima(other.viteza_maxima), proprietar(other.proprietar) {
    std::cout << "Copy constructorul a fost apelat pentru avionul: " << nume << std::endl;
}

// Destructor
Avion::~Avion() {
    std::cout << "Destructorul a fost apelat pentru avionul: " << nume << std::endl;
}

// afisare informatii
void Avion::afiseazaInformatii() const {
    std::cout << "Avion: " << nume << ", Capacitate locuri: " << capacitate_locuri
              << ", Viteza maxima: " << viteza_maxima << " km/h, Proprietar: " << proprietar << std::endl;
}
