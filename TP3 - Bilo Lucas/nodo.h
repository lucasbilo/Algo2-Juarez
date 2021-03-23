#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED
#include <iostream>
#include "figura.h"

// Tipo de dato
typedef Figura* Dato;

class Nodo
{
     private:

         Dato dato; // Dato a almacenar
         Nodo* psig; // Puntero a otro nodo

     public:
         // Constructor con parametro
         // PRE: Ninguna
         // POST: Crea un nodo con el dato d y el puntero a NULL
         Nodo(Dato d);

         // Destructor
         // PRE: Nodo creado
         // POST: Libera la memoria reservada que tiene dato
         ~Nodo();

         // PRE: el nodo tiene que estar creado
         // POST: Al nodo se le asigna d como dato (se pierde lo que estaba asignado antes en dato)
         void modificar_dato(Dato d);

         // PRE: el nodo tiene que estar creado
         // POST: devuelve el dato que contiene el nodo
         Dato obtener_dato();

         // PRE: el nodo tiene que estar creado
         // POST: el puntero al siguiente nodo apuntara a ps (psig = ps)
         void modificar_siguiente(Nodo* ps);

         // PRE: el nodo tiene que estar creado
         // POST: Devuelve el puntero al siguiente nodo (psig). Si es el ultimo devuelve NULL
         Nodo* obtener_siguiente();
};

#endif // NODO_H_INCLUDED
