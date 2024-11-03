#ifndef AVION_HPP
#define AVION_HPP

#include <string>

class Avion {
private:
    std::string nume;
    int capacitate_locuri;
    int viteza_maxima;
    std::string proprietar;

public:
    // Constructor
    Avion(std::string nume = "Avion Necunoscut", int capacitate_locuri = 150, int viteza_maxima = 900, std::string proprietar = "necunoscut");

    // Getters
    std::string getNume() const;
    int getCapacitateLocuri() const;
    int getVitezaMaxima() const;
    std::string getProprietar() const;

    // Setters
    void setNume(const std::string& nume);
    void setCapacitateLocuri(int capacitate_locuri);
    void setVitezaMaxima(int viteza_maxima);
    void setProprietar(const std::string& proprietar);
};

#endif // AVION_HPP
