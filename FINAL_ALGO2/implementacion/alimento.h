#ifndef ALIMENTO_H_INCLUDED
#define ALIMENTO_H_INCLUDED

#include "lista.h"

class Alimento{

private:
    std::string nombre;
    unsigned int calorias;
    Lista<std::string>* ingredientes;

public:

    // Crea un alimento con su nombre, la cantidad de calor�as y una lista
    // de los ingredientes que lo conforman
    Alimento (std::string nombre, unsigned int calorias, Lista<std::string>* ingredientes);

    std::string obtener_nombre(); // devuelve el nombre del alimento

    unsigned int obtener_calorias (); // devuelve la cantidad de calor�as

    Lista<std::string>* obtener_ingredientes (); // devuelve un ptr la lista de ingredientes
};



class Buscador_de_comidas{
public:

    Buscador_de_comidas(){};
    // Post: busca en �comidas� aquellas que tienen alg�n ingrediente de la
    // lista �ingredientes_permitidos� y ninguno de la lista �ingredientes_no_permitidos�
    // y tienen una calor�a menor a �calor�a_maxima�
    // Devuelve una lista con los alimentos que cumplen con estas caracter�sticas
    Lista<Alimento*>* comidas_para_celiacos(Lista<Alimento*>* comidas, Lista<std::string>* ingredientes_permitidos, Lista<std::string>* ingredientes_no_permitidos, unsigned int caloria_maxima);
};



#endif // ALIMENTO_H_INCLUDED
