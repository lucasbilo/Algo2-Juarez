#ifndef NARRADOR_H
#define NARRADOR_H

#include "Boxeador.h"

class Narrador
{
    public:
        void indicar_ganador(Boxeador golpado);
        void comentar_golpe(Boxeador ganador);
        void comentar_golpe(Boxeador atacante, Boxeador golpeado);
};

#endif // NARRADOR_H
