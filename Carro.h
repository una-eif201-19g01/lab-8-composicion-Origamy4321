//
// Created by Lady Asura III on 4/10/2019.
//

#ifndef LAB_7_COMPOSICION_CARRO_H
#define LAB_7_COMPOSICION_CARRO_H
#include "Propietario.h"
#include "Puerta.h"
#include "Rueda.h"
#include "Motor.h"
#include "Ventana.h"
#include <string>

using namespace std;
class Propietario;

class Carro {


public:

    string placa;
    int litros;
    Puerta *puertas;
    Motor *motor;
    Rueda *Ruedas;
    Propietario *propietario;
    Ventana *ventana;


public:

    Carro();

    Carro(const string &placa, int litros, Puerta *puertas, Motor *motor, Rueda *ruedas, Propietario *propietario,
          Ventana *ventana);

    virtual ~Carro();

    const string &getPlaca() const;

    void setPlaca(const string &placa);

    int getLitros() const;

    void setLitros(int litros);

    string toString();

    void encenderMotor();

    void abrirPuertas();

    void abrirVentanas();

    void cambiarPresionRueda(float);

    Puerta *getPuertas() const;

    void setPuertas(Puerta *puertas);

    const Motor &getMotor() const;

    void setMotor(const Motor*motor);

    Rueda *getRuedas() const;

    void setRuedas(Rueda *ruedas);

    Ventana *getVentana() const;

    void setVentana(Ventana *ventana);

    Propietario *getPropietario() const;

    void setPropietario(Propietario *propietario);

};


#endif //LAB_7_COMPOSICION_CARRO_H
