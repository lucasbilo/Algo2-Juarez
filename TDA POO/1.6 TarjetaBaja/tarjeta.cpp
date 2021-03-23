#include "tarjeta.h"

TarjetaBaja::TarjetaBaja(double saldo_inicial){
    saldo = saldo_inicial;
}

double TarjetaBaja::obtener_saldo(){
    return saldo;
}

void TarjetaBaja::cargar(double monto){
    saldo += monto;
}

void TarjetaBaja::pagar_viaje_en_colectivo(int seccion){
    switch(seccion){
        case 1: saldo -= 12; break;
        case 2: saldo -= 13; break;
        case 3: saldo -= 13.75; break;
    }
    total_viajes_en_colectivo += 1;
}

void TarjetaBaja::pagar_viaje_en_subte(){
    saldo -= 12.50;
    total_viajes_en_subte += 1;
}


int TarjetaBaja::contar_viajes (){
    return total_viajes_en_colectivo + total_viajes_en_subte;
}

int TarjetaBaja::contar_viajes_en_colectivo (){
    return total_viajes_en_colectivo;
}

int TarjetaBaja::contar_viajes_en_subte (){
    return total_viajes_en_subte;
}

