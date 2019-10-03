//
// Created by Maikol Guzman  on 2019-09-26.
//

#include "Ventana.h"

Ventana::Ventana(bool polarizada, bool estado) : polarizada(polarizada), estado(estado) {}

Ventana::Ventana() {}

Ventana::~Ventana() {

}

bool Ventana::isPolarizada() const {
    return polarizada;
}

void Ventana::setPolarizada(bool polarizada) {
    Ventana::polarizada = polarizada;
}

bool Ventana::isEstado() const {
    return estado;
}

void Ventana::setEstado(bool estado) {
    Ventana::estado = estado;
}

void Ventana::abrir() {

    setEstado(true);
}

void Ventana::cerrar() {

    setEstado(false);

}
