#ifndef RECTANGULO_H_INCLUDED
#define RECTANGULO_H_INCLUDED

#include "figura.h"

class Rectangulo : public Figura{

    public:
        // Constructor
        // PRE: base > 0 y altura > 0
        // POST: Inicializa las variables con el constructor de Figura
        // dim_1 = base // dim_2 = altura
        Rectangulo(double base, double altura);

        // POST: Imprime por pantalla lo siguiente:
        // Rectangulo: Base = base / Altura = altura / Superficie = superficie
        void mostrar();

        // POST: Devuelve el valor de la superficie del rectangulo:
        // Superficie = base * altura
        double superficie();

};


#endif // RECTANGULO_H_INCLUDED
