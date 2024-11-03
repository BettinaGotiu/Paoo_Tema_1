#ifndef AVION_HPP
#define AVION_HPP

#include <string>

class Avion {
public:
    // Constructor 
    Avion(std::string nume, int capacitate_locuri, int viteza_maxima, std::string proprietar);

private:
    std::string nume;
    int capacitate_locuri;
    int viteza_maxima;
    std::string proprietar;
};

#endif // AVION_HPP
