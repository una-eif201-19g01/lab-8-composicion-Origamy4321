//
// Created by Maikol Guzman  on 2019-09-26.
//

#ifndef LAB_7_COMPOSICION_MOTOR_H
#define LAB_7_COMPOSICION_MOTOR_H


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

};


#endif //LAB_7_COMPOSICION_MOTOR_H
