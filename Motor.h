//
// Created by Maikol Guzman  on 2019-09-26.
//

#ifndef LAB_7_COMPOSICION_MOTOR_H
#define LAB_7_COMPOSICION_MOTOR_H

#include <iostream>
using namespace std;

class Motor {

protected:

    bool estado;

public:

    Motor(bool estado);

    Motor();

    bool isEstado() const;

    void setEstado(bool estado);

    void setEstadoApagado();

    void setEstadoEncendido();

    string toString();

};


#endif //LAB_7_COMPOSICION_MOTOR_H
