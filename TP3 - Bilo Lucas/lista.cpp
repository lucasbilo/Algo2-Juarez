#include "lista.h"

Lista::Lista(){
    primero = 0;
    tam = 0;
}

Lista::~Lista(){
    while (!(this->lista_vacia()))
        this->eliminar_dato(1);
}

bool Lista::lista_vacia(){
    return (primero == 0);
}

void Lista::insert(Dato d){
    Nodo* pnodo = new Nodo(d);
    Nodo* paux = primero;

    if (this->lista_vacia())
        primero = pnodo;
    else{
        while(paux->obtener_siguiente()){
            paux = paux->obtener_siguiente();
        }
        paux->modificar_siguiente(pnodo);
    }
    tam++;
}

Dato Lista::obtener_dato(unsigned pos){
    Nodo* paux = primero;
    unsigned i = 1;
    while (i < pos && paux->obtener_siguiente()){
        paux = paux->obtener_siguiente();
        i++;
    }
    return paux->obtener_dato();
}

void Lista::eliminar_dato(unsigned pos){
    Nodo* paux = primero;
    if (pos == 1 || !(primero->obtener_siguiente())){
        primero = paux->obtener_siguiente();
    }
    else{
        unsigned i = 1;
        Nodo* pant;
        while (i < pos && paux->obtener_siguiente()){
            pant = paux;
            paux = paux->obtener_siguiente();
            i++;
        }
        pant->modificar_siguiente(paux->obtener_siguiente());
    }
    delete paux;
    tam--;
}

unsigned Lista::obtener_tam(){
    return tam;
}
