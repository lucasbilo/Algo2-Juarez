#include "punto.h"
#include <iostream>
#include <cmath>

using namespace std;

Punto::Punto(int x = 0, int y = 0){
    coordenadas[0] = x;
    coordenadas[1] = y;
}

void Punto::consultar_coordenadas(){
    cout << "X: " << coordenadas[0] << " | Y: " << coordenadas[1] << endl;
}

void Punto::cambiar_coordenadas(int x, int y){
    coordenadas[0] = x;
    coordenadas[1] = y;
}


bool Punto::esta_sobre_eje_x(){
    if(coordenadas[0] == 0)
        return true;
    return false;
}

bool Punto::esta_sobre_eje_y(){
    if(coordenadas[1] == 0)
        return true;
    return false;
}

bool Punto::esta_sobre_origen(){
    if((coordenadas[0] == 0) && (coordenadas[1] == 0))
        return true;
    return false;
}

int Punto::distancia_al_origen(){
    return sqrt((coordenadas[0]*coordenadas[0]) + (coordenadas[1]*coordenadas[1]));
}


