#include "Rectangulo.h"
#include <iostream>

using namespace std;

Rectangulo::Rectangulo(int base, int altura){
    this->base = base;
    this->altura = altura;
}
void Rectangulo::get_altura(int altura){
    if(altura > 0)
        this->altura = altura;
}

void Rectangulo::set_altura(){
    cout << "El valor de la altura es: " << altura << endl;
}

void Rectangulo::get_base(int base){
    if(base > 0)
        this->base = base;
}

void Rectangulo::set_base(){
    cout << "El valor de la base es: " << base << endl;
}

int Rectangulo::perimetro_rectangulo(){
    return 2*(base + altura);
}

int Rectangulo::area_rectangulo(){
    return base*altura;
}
