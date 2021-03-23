#ifndef RESTAURANTE_H_INCLUDED
#define RESTAURANTE_H_INCLUDED

#include "lista.h"
class Restaurante{
private:
    std::string nombre;
    int precio_promedio;
    Lista<std::string>* platos;

public:
    // Crea un restaurante con su nombre, el precio promedio por cubierto y
    // una lista de platos que sirve
    Restaurante (std::string nombre, int precio_promedio, Lista<std::string>* platos);

    std::string obtener_nombre(); // devuelve el nombre del restaurante

    int obtener_precio_promedio (); // devuelve el precio promedio

    Lista<std::string>* obtener_platos (); // devuelve ptr a la lista de platos
};

#endif // RESTAURANTE_H_INCLUDED
