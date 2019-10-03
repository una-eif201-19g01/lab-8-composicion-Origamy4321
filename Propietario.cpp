//
// Created by Maikol Guzman  on 2019-09-26.
//

#include "Propietario.h"

Propietario::Propietario(const string &nombre) : nombre(nombre) {}

Propietario::Propietario() {}

Propietario::~Propietario() {

}

const string &Propietario::getNombre() const {
    return nombre;
}

void Propietario::setNombre(const string &nombre) {
    Propietario::nombre = nombre;
}

string Propietario::toString() {

    string reporte;

    reporte = + "el nombre del dueño del vehiculo es :   " + getNombre() + "\n";

    return reporte;
}
