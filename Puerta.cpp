//
// Created by Maikol Guzman  on 2019-09-26.
//

#include "Puerta.h"

Puerta::Puerta(Ventana ventana1, bool estado) : ventana1(ventana1), estado(estado) {}

Puerta::~Puerta() {

}

Ventana Puerta::getVentana1() const {
    return ventana1;
}

void Puerta::setVentana1(Ventana ventana) {
    Puerta::ventana1 = ventana;
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

    ventana1.abrir();

}

void Puerta::cerrarVentana() {

    ventana1.cerrar();

}
