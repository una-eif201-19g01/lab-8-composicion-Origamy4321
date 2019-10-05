//
// Created by Maikol Guzman  on 2019-09-26.
//

#ifndef LAB_7_COMPOSICION_PROPIETARIO_H
#define LAB_7_COMPOSICION_PROPIETARIO_H
#include "Carro.h"
#include <vector>
#include <iostream>
using namespace std;

class Carro;

class Propietario {

public:

    string nombre;

    Carro *carro;

    string toString();

public:

    Propietario(const string &nombre, Carro *carro);

    Propietario();

    virtual ~Propietario();

    const string &getNombre() const;

    void setNombre(const string &nombre);

    Carro *getCarro() const;

    void setCarro(Carro *carro);


};


#endif //LAB_7_COMPOSICION_PROPIETARIO_H
