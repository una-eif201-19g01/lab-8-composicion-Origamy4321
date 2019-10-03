//
// Created by Maikol Guzman  on 2019-09-26.
//

#ifndef LAB_7_COMPOSICION_PUERTA_H
#define LAB_7_COMPOSICION_PUERTA_H

#include "Ventana.h"
#include <iostream>

using namespace std;

class Puerta {

    Ventana ventana1;

    bool estado;

public:
    Puerta(Ventana ventana1, bool estado);

    virtual ~Puerta();

    Ventana getVentana1() const;

    void setVentana1(Ventana ventana1);

    bool isEstado() const;

    void setEstado(bool estado);

    Puerta();

    void abirPuerta();

    void cerrarPuerta();

    void abrirVentana();

    void cerrarVentana();


};


#endif //LAB_7_COMPOSICION_PUERTA_H
