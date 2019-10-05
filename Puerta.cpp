//
// Created by Maikol Guzman  on 2019-09-26.
//

#include "Puerta.h"



Puerta::~Puerta() {

}


bool Puerta::isEstado() const {
    return estado;
}

void Puerta::setEstado(bool estado) {
    Puerta::estado = estado;
}

Puerta::Puerta() {}

void Puerta::abirPuerta() {


    setEstado(true);

}

void Puerta::cerrarPuerta() {

    setEstado(false);

}

void Puerta::abrirVentana() {

    ventana1->abrir();

}

void Puerta::cerrarVentana() {

    ventana1->cerrar();

}

string Puerta::toString() {
    string reporte;

    if (isEstado() == true) {

        reporte = "La puerta esta abierta   ";
    } else {

        reporte = "La puerta esta cerrada";
    }

    return reporte;
}

Puerta::Puerta(Ventana *ventana1, bool estado) : ventana1(ventana1), estado(estado) {}

void Puerta::setVentana1(Ventana *ventana1) {
    Puerta::ventana1 = ventana1;
}

Ventana *Puerta::getVentana1() const {
    return ventana1;
}
