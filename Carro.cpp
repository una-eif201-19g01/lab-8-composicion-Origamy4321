//
// Created by Lady Asura III on 4/10/2019.
//

#include "Carro.h"


Carro::~Carro() {

}

const string &Carro::getPlaca() const {
    return placa;
}

void Carro::setPlaca(const string &placa) {
    Carro::placa = placa;
}

int Carro::getLitros() const {
    return litros;
}

void Carro::setLitros(int litros) {
    Carro::litros = litros;
}

string Carro::toString() {

    string reporte;

    reporte = +"los datos del vehículo son los siguientes:   " "\n" "el propietario del vehículo es: " +
              propietario->getNombre() + "\n" + "el número de placa es:  " + getPlaca() +
              "\n" " la cantidad de litros de gasolina es de " + to_string(getLitros()) + "\n" +
              "El motor del vehículo se encuentra " + motor->toString() + "\n" +
              "Las puertas del vehiculo se encuentra :   " + "\n" + puertas->toString() + "\n" +
              "Las ventanas del vehiculo se encuentran:  " + ventana->toString() +  "\n";


    return reporte;
}

void Carro::encenderMotor() {

    motor->setEstadoEncendido();
}

void Carro::abrirPuertas() {

    puertas->abirPuerta();

}

void Carro::abrirVentanas() {

    ventana->abrir();

}

void Carro::cambiarPresionRueda(float nuevaPresion) {

    Ruedas->setPresion(nuevaPresion);

}

Puerta *Carro::getPuertas() const {
    return puertas;
}

void Carro::setPuertas(Puerta *puertas) {
    Carro::puertas = puertas;
}

const Motor &Carro::getMotor() const {
    return motor;
}

void Carro::setMotor(const Motor *motor) {
    Carro::motor = const_cast<Motor *>(motor);
}

Rueda *Carro::getRuedas() const {
    return Ruedas;
}

void Carro::setRuedas(Rueda *ruedas) {
    Ruedas = ruedas;
}


Ventana *Carro::getVentana() const {
    return ventana;
}

void Carro::setVentana(Ventana *ventana) {

    Carro::ventana = ventana;
}

Carro::Carro() {

}

Propietario *Carro::getPropietario() const {
    return propietario;
}

void Carro::setPropietario(Propietario *propietario) {
    Carro::propietario = propietario;
}

Carro::Carro(const string &placa, int litros, Puerta *puertas, Motor *motor, Rueda *ruedas, Propietario *propietario,
             Ventana *ventana) : placa(placa), litros(litros), puertas(puertas), motor(motor), Ruedas(ruedas),
                                 propietario(propietario), ventana(ventana) {}


