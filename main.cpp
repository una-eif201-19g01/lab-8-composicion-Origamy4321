#include <iostream>
#include "Carro.h"

int main() {

    Motor *motor = new Motor(true);
    Ventana *ventana = new Ventana(true, true, true);
    Rueda *rueda = new Rueda(32);
    Puerta *puerta = new Puerta(ventana, true);
    Propietario *propietario = new Propietario;
    Carro *carro = new Carro("abc123", 350,puerta,motor,rueda,propietario,ventana);
    propietario->setNombre("Sanzang");

    cout<< carro->toString()<<endl;


    std::cout << "Hello, World!" << std::endl;
    return 0;
}