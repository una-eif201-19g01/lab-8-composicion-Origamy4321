//
// Created by Maikol Guzman  on 2019-09-26.
//

#include "Propietario.h"



string Propietario::toString() {

    string reporte;

    reporte = + "el nombre del dueño del vehiculo es :   " + getNombre() + "\n";

    return reporte;
}

Propietario::Propietario(const string &nombre, Carro *carro) : nombre(nombre), carro(carro) {}

Propietario::Propietario() {}

Propietario::~Propietario() {

}

const string &Propietario::getNombre() const {
    return nombre;
}

void Propietario::setNombre(const string &nombre) {
    Propietario::nombre = nombre;
}

Carro *Propietario::getCarro() const {
    return carro;
}

void Propietario::setCarro(Carro *carro) {
    Propietario::carro = carro;
}


