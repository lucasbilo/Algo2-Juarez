#include "circulo.h"
#include <cmath>

const double PI = 3.14159265358979323846;

Circulo::Circulo(double radio){
    this->radio = radio;
}

void Circulo::modificar_radio(double radio){
    this->radio = radio;
}

double Circulo::obtener_radio(){
    return radio;
}

double Circulo::obtener_diametro(){
    return radio + radio;
}

double Circulo::obtener_perimetro(){
    return 2 * PI * radio;

}

double Circulo::obtener_superficie(){
    return PI * pow(radio, 2);

}



