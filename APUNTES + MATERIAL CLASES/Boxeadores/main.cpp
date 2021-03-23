#include <iostream>
#include "Boxeador.h"
#include "Narrador.h"

using namespace std;

int main()
{
    Narrador narrador;
    //Sin constructor

    Boxeador pity_alvarez;
    Boxeador maravilla_martinez;

    pity_alvarez.asignar_vida(100);
    pity_alvarez.asignar_fuerza(10);
    pity_alvarez.asignar_nombre("Pity Alvarez");

    maravilla_martinez.asignar_vida(100);
    maravilla_martinez.asignar_fuerza(5);
    maravilla_martinez.asignar_nombre("Maravilla Martinez");

    while(!pity_alvarez.esta_knockeado() && !maravilla_martinez.esta_knockeado()){
        pity_alvarez.golpear(maravilla_martinez);
        narrador.comentar_golpe(pity_alvarez, maravilla_martinez);

        maravilla_martinez.golpear(pity_alvarez);
        narrador.comentar_golpe(pity_alvarez);
    }

    cout << endl << endl;

    if(pity_alvarez.esta_knockeado()){
        narrador.indicar_ganador(maravilla_martinez);
    } else {
        narrador.indicar_ganador(pity_alvarez);
    }

    return 0;
}
