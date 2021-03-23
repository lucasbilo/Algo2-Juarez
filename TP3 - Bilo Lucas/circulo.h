#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED

#include "figura.h"

class Circulo : public Figura{

    public:
        // Constructor
        // PRE: radio > 0
        // POST: Inicializa las variables con el constructor de Figura
        // dim_1 = radio
        Circulo(double radio);

        // POST: Imprime por pantalla lo siguiente:
        // Circulo: Radio = radio / Superficie = superficie
        void mostrar();

        // POST: Devuelve el valor de la superficie del circulo:
        // Superficie = pi * radio * radio
        double superficie();

};

#endif // CIRCULO_H_INCLUDED
