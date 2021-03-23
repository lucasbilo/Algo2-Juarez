#ifndef UNIVERSIDAD_H_INCLUDED
#define UNIVERSIDAD_H_INCLUDED

#include "lista.h"

class Universidad{
private:
    std::string nombre;
    int ranking;
    Lista<std::string>* carreras;

public:

    // Crea una universidad con su nombre, el ranking y una lista de carreras
    Universidad (std::string nombre, int ranking, Lista<std::string>* carreras);

    std::string obtener_nombre(); // devuelve el nombre de la universidad

    unsigned int obtener_ranking (); // devuelve el ranking

    Lista<std::string>* obtener_carreras (); // devuelve ptr a lista de carreras
};


#endif // UNIVERSIDAD_H_INCLUDED
