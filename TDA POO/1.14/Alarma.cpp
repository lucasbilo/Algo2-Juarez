#include "Alarma.h"

Sensor::Sensor(){
    prendido = false;
    activo = false;
}

void Sensor::encender(){
    prendido = true;
}

void Sensor::apagar(){
    prendido = false;
}

bool Sensor::activado(){
    return activo;
}

void Sensor::activar(){
    activo = true;
}


// _________________________________________________________________________________

Alarma::Alarma(int codigo_seguridad) : Sensor(){
    this->codigo_seguridad = codigo_seguridad;
    this-> prendido = false;
    movimiento = new Sensor()
}

void Alarma::encender(){
    prendido = true;
    movimiento.encender();
    contacto.encender();
    sonido.encender();
}

void Alarma::apagar(int codigo_seguridad){
    if(this->codigo_seguridad == codigo_seguridad){
        prendido = false;
        movimiento.apagar();
        contacto.apagar();
        sonido.apagar();
    }
}

bool Alarma::activada(){
    if(movimiento.activado || sonido.activado || sonido.activado)
        return true;
    return false;
}
