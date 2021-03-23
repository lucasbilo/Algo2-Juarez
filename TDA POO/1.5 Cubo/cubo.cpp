#include "cubo.h"
#include <cmath>>

Cubo::Cubo(float lado){
    this->lado = lado;
    superficie = (6 * (pow(lado, 2)));
    volumen = pow(lado, 3);
}

int Cubo::obtener_longitud_lado(){
    return lado;
}


void Cubo::cambiar_longitud_lado(float lado){
    this->lado = lado;
    superficie = (6 * (pow(lado, 2)));
    volumen = pow(lado, 3);

}

int Cubo::obtener_superficie_cubo(){
    return superficie;
}


void Cubo::cambiar_superficie_cubo(float superficie_cubo){
    superficie = superficie_cubo;
    lado = sqrt(superficie_cubo / 6);
    volumen = pow(lado, 3);
}

float Cubo::obtener_volumen (){
    return volumen;
}

void Cubo::cambiar_volumen(float volumen){
    this->volumen = volumen;
    lado = pow(volumen, 0.333333333333); //raiz cubica
    superficie = (6 * (pow(lado, 2)));
}
