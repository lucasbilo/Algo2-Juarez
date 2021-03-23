#include "nodo.h"
#include <iostream>

using namespace std;

Nodo::Nodo(Dato d){
    //std::cout << "Se construye el nodo " << (unsigned)this << std::endl;
    dato = d;
    psig = 0;
}

Nodo::~Nodo(){
    delete dato;
    //std::cout << "Se destruye el nodo " << (unsigned)this << std::endl;
}

void Nodo::modificar_dato(Dato d){
    dato = d;
}

Dato Nodo::obtener_dato(){
    return dato;
}

void Nodo::modificar_siguiente(Nodo* ps){
    psig = ps;
}

Nodo* Nodo::obtener_siguiente(){
    return psig;
}
