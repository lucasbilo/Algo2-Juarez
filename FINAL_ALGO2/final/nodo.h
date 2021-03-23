#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED
#include <iostream>

// El int puede ser cualquier tipo de dato
typedef int Dato;

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
         // POST: No hace nada
         ~Nodo();

         // Setea el dato (lo cambia)
         // PRE: el nodo tiene que estar creado
         // POST: El nodo queda con el dato d
         void modificar_dato(Dato d);

         // Obtener el dato
         // PRE: nodo creado
         // POST: devuelve el dato que contiene el nodo
         Dato obtener_dato();

         // Setear el puntero al siguiente nodo
         // PRE: nodo creado
         // POST: el puntero al siguiente nodo apuntar� a ps
         void modificar_siguiente(Nodo* ps);

         // Obtener el puntero al nodo siguiente
         // PRE: nodo creado
         // POST: Devuelve el puntero al siguiente nodo
         // Si es el �ltimo devuelve NULL
         Nodo* obtener_siguiente();
};
#endif // NODO_H_INCLUDED
