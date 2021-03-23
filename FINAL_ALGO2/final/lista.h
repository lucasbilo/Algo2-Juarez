#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include "nodo.h"

class Lista{

     private:
         Nodo* primero;
         int tam;
         Nodo* actual;

    public:
        // Constructor
        // Constructor sin parametros
        // PRE: -
        // POS: crea una Lista de longitud 0 y primero apunta a NULL
        Lista();

        // Constructor de copia
        // PRE: lista es una Lista valida
        // POS: crea una Lista igual a lista
        Lista(Lista& lista);


        // Destructor
        // PRE: -
        // POST: Libera todos los recursos de la lista
        ~Lista();

        // La lista es vac�a?
        // PRE: -
        // POST: devuelve verdadero si la lista es vacia, falso de lo contrario
        bool lista_vacia();


        // insertar un dato en cierta posicion
        // PRE: d dato valido y 0 < pos <= longitud + 1
        // POS: inserta el Dato d en la posicion pos (la 1 es la primera),
        //    incrementa en 1 la longitud
        void insertar(Dato d, int pos);

        // Obtener el dato que est� en la posici�n pos
        // PRE: - 0 < pos <= tam
        // POST: devuelve el dato que esta en la posicion pos
        // se toma 1 como el primero
        Dato obtener_dato(int pos);

        // Borrado del nodo que est� en la posici�n pos
        // PRE: 0 < pos <= tam
        // POST: libera el nodo que esta en la posici�n pos
        // se toma 1 como el primero
        void eliminar(int pos);

        // Obtener el tama�o de la lista
        // PRE: Lista creada
        // POST: Devuelve tam (cantidad de nodos de la lista)
        int obtener_tam();

        // cambia el DAto que esta en cierta posicion
        // PRE: 0 < pos <= longitud
        // POS: cambia el dato que esta en la posicion pos (la 1 es la primera)
        void cambiar_dato(Dato d, int pos);

        void mostrar();

        void intercambiar_datos(int pos1, int pos2);
        void insertar_lista(Lista lista);
        //Lista* insertar_lista(Lista& lista);
        //void invertir_lista();
        Lista* invertir_lista();
        //PRE: LISTAS ORDENADAS!
        void merge_ordenado(Lista& lista2);
        void elim_prim_ocurrencia(Dato dato);
        void elim_todas_ocurrencias(Dato dato);
        Lista* lista_resta(Lista& lista2);

        // reinicia el puntero actual a la primera posici�n (o nulo si la lista es vac�a).
        // PRE:
        // POS: pone el puntero a la primera posici�n o apuntando a NULL
        void reiniciar ( );
        // consulta si hay un elemento siguiente (si el actual no apunta a NULL)
        // PRE:
        // POS: devuelve true si el actual no apunta a NULL, false de lo contrario
        bool hay_siguiente ( );
        // devuelve el siguiente elemento (el elemento que apunta actual)
        // PRE: hay_siguiente tiene que haber devuelto true previamente
        // POS: devuelve el elemento actual y avanza
        Dato siguiente ( );


    private:
        // Obtiene un puntero al nodo de la posicion pos
        // PRE : 0 < pos <= tam
        // POST : devuelve un puntero al Nodo que esta en la posicion pos (la 1 es la primera)
        Nodo* obtener_nodo(unsigned pos);

};
#endif // LISTA_H_INCLUDED
