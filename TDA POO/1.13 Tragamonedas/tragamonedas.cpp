#include "tragamonedas.h"
#include <cstdlib>

Tambor::Tambor(){
    posicion = 0;
}

void Tambor::girar(){
    posicion = (1 + rand()%(9 - 1)); // entre 1 y 8 inclusive
}

int Tambor::obtener_posicion(){
    return posicion;
}


// ----------------------------------------------------------------------------------------

Tragamonedas::Tragamonedas(){
    tambor_1 = 0;
    tambor_2 = 0;
    tambor_3 = 0;
}

int Tragamonedas::determinar_premio(){
    if(otorgar_premio())
        return (1 + rand()%(11 - 1)); //premio entre 1 y 10
    return 0;
}

void Tragamonedas::sortear(){
    tambor_1.girar();
    tambor_2.girar();
    tambor_3.girar();
}

bool Tragamonedas::otorgar_premio(){
    if((tambor_1.obtener_posicion() == tambor_2.obtener_posicion()) && (tambor_1.obtener_posicion() == tambor_3.obtener_posicion()))
        return true;
    return false;
}
