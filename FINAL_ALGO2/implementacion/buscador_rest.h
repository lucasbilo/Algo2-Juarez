#ifndef BUSCADOR_REST_H_INCLUDED
#define BUSCADOR_REST_H_INCLUDED

#include "restaurante.h"
class Buscador_restaurantes{

public:
    // Post: busca en “restaurantes” aquellos que tienen por lo menos dos platos de la
    // lista “platos_deseados” y un precio promedio menor o igual a precio_maximo.
    // Devuelve una lista con los restaurantes que cumplen con estas características.
    Lista<Restaurante*>* recomendar_restaurantes (Lista<Restaurante*>* restaurantes,
                                                   Lista<std::string>* platos_deseados, int precio_maximo);
};

#endif // BUSCADOR_REST_H_INCLUDED
