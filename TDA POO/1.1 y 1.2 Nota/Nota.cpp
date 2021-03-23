#include "Nota.h"


Nota::Nota( int valor_inicial ){
    nota = valor_inicial;
}

int Nota::obtener_valor(){
    return nota;
}

bool Nota::aprobado(){
    if(nota >= 4)
        return true;

    return false;
}

bool Nota::desaprobado(){
    if(nota < 4)
        return true;

    return false;
}

void Nota::recuperar(int nuevo_valor){
    if(nuevo_valor > nota)
        nota = nuevo_valor;
}
