//
// Created by Maikol Guzman  on 2019-09-26.
//

#ifndef LAB_7_COMPOSICION_VENTANA_H
#define LAB_7_COMPOSICION_VENTANA_H


class Ventana {

protected:

    bool polarizada;

    bool estado;

public:
    Ventana(bool polarizada, bool estado);

    Ventana();

    virtual ~Ventana();

    bool isPolarizada() const;

    void setPolarizada(bool polarizada);

    bool isEstado() const;

    void setEstado(bool estado);

    void abrir();

    void cerrar();


};


#endif //LAB_7_COMPOSICION_VENTANA_H
