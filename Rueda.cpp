//
// Created by Maikol Guzman  on 2019-09-26.
//

#include "Rueda.h"

Rueda::Rueda(float presion) : presion(presion) {}

Rueda::~Rueda() {

}

Rueda::Rueda() {}

void Rueda::tamano() {

}

float Rueda::getPresion() const {
    return presion;
}

void Rueda::setPresion(float presion) {
    Rueda::presion = presion;
}

string Rueda::toString() {

    string reporte;

    reporte = "la presión de los neumaticos es de " + to_string(getPresion()) + " psi";


    return reporte;
}
