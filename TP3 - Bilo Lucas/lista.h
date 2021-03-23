#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include "nodo.h"

class Lista{

     private:

         Nodo* primero; // Primer elemento de la lista
         unsigned tam; // Tamaño de la lista

    public:
         // Constructor
         // PRE: ninguna
         // POST: construye una lista vacia
         // - primero apunta a nulo
         // - tam = 0
         Lista();

         // Destructor
         // PRE: lista creada
         // POST: Libera todos los recursos de la lista
         ~Lista();

         // PRE: lista creada
         // POST: devuelve TRUE si la lista es vacia, FALSE en caso contrario
         bool lista_vacia();

         // PRE: lista creada
         // POST: agrega un dato(dentro de un nodo) al final
         // incrementa tam en 1
         void insert(Dato d);

         // PRE: lista creada y no vacia  //  0 < pos <= tam
         // POST: devuelve el dato que esta en la posicion pos
         // La primer posicion se indica con 1
         Dato obtener_dato(unsigned pos);

         // PRE:  lista creada y no vacia //  0 < pos <= tam
         // POST: libera el nodo que esta en la posición pos
         // La primer posicion se indica con 1
         void eliminar_dato(unsigned pos);

         // PRE: Lista creada
         // POST: Devuelve tam (cantidad de nodos de la lista)
         unsigned obtener_tam();
};
#endif // LISTA_H_INCLUDED
