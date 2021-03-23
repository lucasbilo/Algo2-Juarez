#include <iostream>
#include "Boxeador.h"

using namespace std;

void Boxeador::asignar_vida(int vida){
    this->vida = vida;
}

void Boxeador::asignar_fuerza(int fuerza){
    this->fuerza = fuerza;
}

void Boxeador::asignar_nombre(string nombre){
    this->nombre = nombre;
}

string Boxeador::obtener_nombre(){
    return nombre;
}

bool Boxeador::esta_knockeado(){
    if(vida == 0){
        return true;
    }
    return false;
}

void Boxeador::recibir_golpe(int fuerza){
    this->vida = this->vida - fuerza;
}

void Boxeador::golpear(Boxeador &contrincante){
    contrincante.recibir_golpe(this->fuerza);
}
