#include "Avion.hpp"

// Constructor
Avion::Avion(std::string nume, int capacitate_locuri, int viteza_maxima, std::string proprietar)
    : nume(nume), capacitate_locuri(capacitate_locuri), viteza_maxima(viteza_maxima), proprietar(proprietar) {
}

// Getters
std::string Avion::getNume() const {
    return nume;
}

int Avion::getCapacitateLocuri() const {
    return capacitate_locuri;
}

int Avion::getVitezaMaxima() const {
    return viteza_maxima;
}

std::string Avion::getProprietar() const {
    return proprietar;
}

// Setters
void Avion::setNume(const std::string& nume) {
    this->nume = nume;
}

void Avion::setCapacitateLocuri(int capacitate_locuri) {
    this->capacitate_locuri = capacitate_locuri;
}

void Avion::setVitezaMaxima(int viteza_maxima) {
    this->viteza_maxima = viteza_maxima;
}

void Avion::setProprietar(const std::string& proprietar) {
    this->proprietar = proprietar;
}
