//
// Created by Maikol Guzman  on 2019-09-26.
//

#ifndef LAB_7_COMPOSICION_RUEDA_H
#define LAB_7_COMPOSICION_RUEDA_H

#include <iostream>
using namespace std;
class Rueda {

protected:

    float presion;

    void tamano();

public:

    Rueda(float presion);

    virtual ~Rueda();

    Rueda();

    float getPresion() const;

    void setPresion(float presion);

    string toString();


};


#endif //LAB_7_COMPOSICION_RUEDA_H
