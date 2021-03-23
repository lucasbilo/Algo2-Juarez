#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include "nodo.h"

class Lista {

private:
    // atributos
    Nodo* primero;
    int longitud;

public:
    // Constructor sin parametros
    // PRE:
    // POS: crea una Lista de longitud 0 y primero apunta a NULL
    Lista ( );

    // Constructor de copia
    // PRE: lista es una Lista valida
    // POS: crea una Lista igual a lista
    Lista (const Lista& lista);

    // Destructor
    // PRE:
    // POS: libera la memoria solicitada
    ~Lista ( );

    // Lista vacia?
    // PRE:
    // POS: devuelve verdadero si la lista esta vacia, falso de lo contrario
    bool vacia( );

    // obtener longitud de la lista
    // PRE:
    // POS: devuelve la longitud de la lista
    int obtener_longitud( );

    // insertar un dato en cierta posicion
    // PRE: d dato valido y 0 < pos <= longitud + 1
    // POS: inserta el Dato d en la posicion pos (la 1 es la primera),
    //      inrementa en 1 la longitud
    void insertar (Dato d, int pos);

    // eliminar un Nodo en cierta posicion
    // PRE: 0 < pos <= longitud
    // POS: elimina el Nodo en la posicion pos (la 1 es la primera),
    //      libera memoria y decrementa en uno la longitud
    void eliminar (int pos);

    // obtiene el DAto en cierta posicion
    // PRE: 0 < pos <= longitud
    // POS: devuelve el dato que esta en la posicion pos (la 1 es la primera)
    Dato obtener_dato (int pos);

    // cambia el DAto que esta en cierta posicion
    // PRE: 0 < pos <= longitud
    // POS: cambia el dato que esta en la posicion pos (la 1 es la primera)
    void cambiar_dato (Dato d, int pos);

private:
    // devuelve un puntero al Nodo en cierta posicion
    // PRE: 0 < pos <= longitud
    // POS: devuelve un puntero al Nodo que esta en la posicion pos (la 1 es la primera)
    Nodo* obtener_nodo (int pos);

};



#endif // LISTA_H_INCLUDED
