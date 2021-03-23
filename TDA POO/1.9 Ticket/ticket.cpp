#include "ticket.h"

Ticket::Ticket(){
    importe = 0;
    condicion = true;
    cantidad_de_productos = 0;
}

void Ticket::agregar_item(int cantidad , double precio_unitario){
    importe += (cantidad * precio_unitario);
    cantidad_de_productos += cantidad;
}

void Ticket::aplicar_descuento(double porcentaje){
    double descuento = (porcentaje * importe) / 100;
    importe = (importe - descuento);
}

double Ticket::calcular_subtotal(){
    return importe;
}


double Ticket::calcular_total(){
    condicion = false;
    return importe;
}

int Ticket::contar_productos(){
    return cantidad_de_productos;
}
