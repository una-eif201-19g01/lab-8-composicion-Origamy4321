//
// Created by Maikol Guzman  on 2019-09-26.
//

#ifndef LAB_7_COMPOSICION_PROPIETARIO_H
#define LAB_7_COMPOSICION_PROPIETARIO_H

#include <iostream>
using namespace std;

class Propietario {

protected:

    string nombre;

    string toString();

public:
    Propietario(const string &nombre);

    Propietario();

    virtual ~Propietario();

    const string &getNombre() const;

    void setNombre(const string &nombre);


};


#endif //LAB_7_COMPOSICION_PROPIETARIO_H
