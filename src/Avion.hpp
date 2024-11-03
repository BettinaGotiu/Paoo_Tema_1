#ifndef AVION_HPP
#define AVION_HPP

#include <string>
#include <iostream>

class Avion {
public:
    // Constructor 
    Avion(std::string nume, int capacitate_locuri, int viteza_maxima, std::string proprietar);

    // Destructor
    ~Avion();

    void afiseazaInformatii() const;

private:
    std::string nume;
    int capacitate_locuri;
    int viteza_maxima;
    std::string proprietar;
};

#endif 
