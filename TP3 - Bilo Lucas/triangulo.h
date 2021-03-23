#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED

#include "figura.h"

class Triangulo : public Figura{

    public:
        // Constructor
        // PRE: base > 0 y altura > 0
        // POST: Inicializa las variables con el constructor de Figura
        // dim_1 = base // dim_2 = altura
        Triangulo(double base, double altura);

        // POST: Imprime por pantalla lo siguiente:
        // Triangulo: Base = base / Altura = altura / Superficie = superficie
        void mostrar();

        // POST: Devuelve el valor de la superficie del triangulo:
        // Superficie = (base * altura) / 2
        double superficie();

};

#endif // TRIANGULO_H_INCLUDED
