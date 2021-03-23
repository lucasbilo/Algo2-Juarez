#ifndef BUSCADOR_UNI_H_INCLUDED
#define BUSCADOR_UNI_H_INCLUDED

#include "lista.h"
#include "universidad.h"
class Buscador_universidades{

public:
    // Post: busca en “universidades” aquellas que tienen alguna carrera de la
    // lista “vocaciones” y un ranking mayor o igual a ranking_minimo.
    // Devuelve una lista con las universidades que cumplen con estas características.
    Lista<Universidad*>* recomendar_universidades(Lista<Universidad *>* universidades,
                                                    Lista<std::string>* vocaciones, unsigned int ranking_minimo);
};


#endif // BUSCADOR_UNI_H_INCLUDED
