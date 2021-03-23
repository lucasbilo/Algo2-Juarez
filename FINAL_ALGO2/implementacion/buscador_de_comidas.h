#ifndef BUSCADOR_DE_COMIDAS_H_INCLUDED
#define BUSCADOR_DE_COMIDAS_H_INCLUDED

class Buscador_de_comidas{
public:
    // Post: busca en “comidas” aquellas que tienen algún ingrediente de la
    // lista “ingredientes_permitidos” y ninguno de la lista “ingredientes_no_permitidos”
    // y tienen una caloría menor a “caloría_maxima”.
    // Devuelve una lista con los alimentos que cumplen con estas características.
    Lista<Alimento *>* comidas_para_celiacos (Lista<Alimento *>* comidas,
    Lista<string>* ingredientes_permitidos, Lista<string>* ingredientes_no_permitidos, unsigned int caloría_maxima);
};

#endif // BUSCADOR_DE_COMIDAS_H_INCLUDED
