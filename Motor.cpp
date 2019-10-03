//
// Created by Maikol Guzman  on 2019-09-26.
//

#include "Motor.h"

Motor::Motor(bool estado) : estado(estado) {}

Motor::Motor() {}

bool Motor::isEstado() const {
    return estado;
}

void Motor::setEstado(bool estado) {
    Motor::estado = estado;
}

void Motor::setEstadoApagado() {

    setEstado(false);

}

void Motor::setEstadoEncendido() {

    setEstado(true);

}
