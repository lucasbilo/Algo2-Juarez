#include "restaurante.h"

Restaurante::Restaurante (std::string nombre, int precio_promedio, Lista<std::string>* platos){
    this->nombre = nombre;
    this-> precio_promedio = precio_promedio;
    this->platos = platos;
}

std::string Restaurante::obtener_nombre(){
    return nombre;
}
int Restaurante::obtener_precio_promedio(){
    return precio_promedio;
}
Lista<std::string>* Restaurante::obtener_platos(){
    return platos;
}
