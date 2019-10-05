//
// Created by Maikol Guzman  on 2019-09-26.
//

#ifndef LAB_7_COMPOSICION_VENTANA_H
#define LAB_7_COMPOSICION_VENTANA_H

#include <string>
#include <iostream>
using namespace std;

class Ventana {

protected:

    bool polarizada;

    bool electrica;

    bool estado;

public:
    Ventana(bool polarizada, bool estado, bool electrica);

    Ventana();

    virtual ~Ventana();

    bool isPolarizada() const;

    void setPolarizada(bool polarizada);

    bool isEstado() const;

    void setEstado(bool estado);

    void abrir();

    void cerrar();

    bool isElectrica() const;

    void setElectrica(bool electrica);

    string toString();


};


#endif //LAB_7_COMPOSICION_VENTANA_H
