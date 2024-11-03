#ifndef AVION_HPP
#define AVION_HPP

#include <string>
#include <iostream>

class Avion {
public:
    // Constructor, numele si proprietarul vor fi alocate dinamic
    Avion(const char* nume, int capacitate_locuri, int viteza_maxima, const char* proprietar);
    
    // Destructor
    ~Avion();

    void afiseazaInformatii() const;

private:
    char* nume; 
    int capacitate_locuri;
    int viteza_maxima;
    char* proprietar; 
};

#endif 
