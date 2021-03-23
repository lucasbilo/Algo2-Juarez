#include "Narrador.h"
#include <iostream>

void Narrador::comentar_golpe(Boxeador golpeado){
    cout << "Es increible el golpe que " << golpeado.obtener_nombre() << " acaba de recibir!" << endl;
}
void Narrador::indicar_ganador(Boxeador ganador)
{
    cout << "Luego de una ardua pelea de titanes, " << ganador.obtener_nombre() << " ha salido victorioso" << endl;
}

void Narrador::comentar_golpe(Boxeador atacante, Boxeador golpeado)
{
    cout << "No se puede creer en el estudio el golpe que " << atacante.obtener_nombre() << " le ha encajado a "
        << golpeado.obtener_nombre() << endl;
}



