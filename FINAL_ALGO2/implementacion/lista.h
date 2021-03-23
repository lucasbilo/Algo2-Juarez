#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

# include <iostream>
# include "nodo.h"

template < typename Dato >
class Lista{

    private:
        Nodo<Dato>* primero; // Primer elemento de la lista
        unsigned tam; // Tamaño de la lista
        Nodo<Dato>* actual;

    public:
        // Constructor
        // PRE: Ninguna
        // POST: construye una lista vacía
        // primero apunta a nulo y tam = 0
        Lista();

        // Constructor de copia
        // PRE: lista es una Lista valida
        // POS: crea una Lista igual a lista
        Lista(Lista& lista);

        // Destructor
        // PRE: Lista creada
        // POST: Libera todos los recursos de la lista
        ~Lista();

        // insertar un dato en cierta posicion
        // PRE: d dato valido y 0 < pos <= longitud + 1
        // POS: inserta el Dato d en la posicion pos (la 1 es la primera),
        //    incrementa en 1 la longitud
        void insertar(Dato d, int pos);

        // PRE: Lista creada
        // POST: devuelve el tamaño de la lista (cantidad de nodos)
        unsigned obtener_tam();

        // PRE: - lista creada y no vacía
        // - 0 < pos <= tam
        // POST: devuelve el dato que está en la posición pos (se toma 1 como el primero)
        Dato obtener_dato(unsigned pos);

        // PRE: Lista creada
        // POST: TRUE si es vacia (tam == 0), False en caso contrario
        bool lista_vacia();

        // PRE: - lista creada y no vacía
        // - 0 < pos <= tam
        // POST: libera el nodo que está en la posición pos (se toma 1 como el primero)
        void eliminar_dato(unsigned pos);

        // cambia el DAto que esta en cierta posicion
        // PRE: 0 < pos <= longitud
        // POS: cambia el dato que esta en la posicion pos (la 1 es la primera)
        void cambiar_dato(Dato d, int pos);

        void mostrar();

        // reinicia el puntero actual a la primera posición (o nulo si la lista es vacía).
        // PRE:
        // POS: pone el puntero a la primera posición o apuntando a NULL
        void reiniciar();
        // consulta si hay un elemento siguiente (si el actual no apunta a NULL)
        // PRE:
        // POS: devuelve true si el actual no apunta a NULL, false de lo contrario
        bool hay_siguiente();
        // devuelve el siguiente elemento (el elemento que apunta actual)
        // PRE: hay_siguiente tiene que haber devuelto true previamente
        // POS: devuelve el elemento actual y avanza
        Dato siguiente();


    private:
        // Obtiene un puntero al nodo de la posicion pos
        // PRE : 0 < pos <= tam
        // POST : devuelve un puntero al Nodo que esta en la posicion pos (la 1 es la primera)
        Nodo<Dato>* obtener_nodo(unsigned pos);


};


template < typename Dato >
Lista<Dato>::Lista(){
    primero = 0;
    tam = 0;
}

template <typename Dato>
Lista<Dato>::Lista(Lista<Dato>& lista){
    this->tam = lista.obtener_tam();
    this->primero = lista.obtener_nodo(1);
    this->actual = lista.actual();
}

template < typename Dato >
Lista<Dato>::~Lista(){
    while (!this->lista_vacia()){
        this->eliminar_dato(1);
    }
}

template < typename Dato >
bool Lista<Dato>::lista_vacia(){
    return (tam == 0);
}

template < typename Dato >
void Lista<Dato>::insertar(Dato d, int pos){
    Nodo<Dato>* pnodo = new Nodo<Dato>(d);

    if(pos == 1){
        pnodo->modificar_sig(primero);
        primero = pnodo;
    }else{
        Nodo<Dato>* anterior = obtener_nodo(pos-1);
        pnodo->modificar_sig(anterior->obtener_sig());
        anterior->modificar_sig(pnodo);
    }
    tam++;
}

template < typename Dato >
Dato Lista<Dato>::obtener_dato(unsigned pos){
    Nodo<Dato>* paux = primero;
    unsigned i = 1;
    while (i < pos && paux->obtener_sig()){
        paux = paux->obtener_sig();
        i++;
    }
    return paux->obtener_dato();
}

template < typename Dato >
unsigned Lista<Dato>::obtener_tam(){
    return tam;
}

template < typename Dato >
void Lista<Dato>::eliminar_dato(unsigned pos){
    Nodo<Dato>* aux = primero;
    if (!lista_vacia()){
        if (pos == 1){
            primero = primero->obtener_sig();
        }
        else{
            for (unsigned cont = 0; (cont < pos-1 && aux->obtener_sig()); cont++)
                aux = aux->obtener_sig();
            aux->modificar_sig(aux->obtener_sig());
        }
        Nodo<Dato>* borrar = aux;
        delete borrar;
        tam--;
    }
}

template <typename Dato>
void Lista<Dato>::cambiar_dato(Dato d, int pos){
    Nodo<Dato>* aux = primero;
    unsigned i = 1;
    while(i < pos){
        aux = aux->obtener_siguiente();
        i ++;
    }
    aux->modificar_dato(d);
}

template <typename Dato>
Nodo<Dato>* Lista<Dato>::obtener_nodo(unsigned pos){
    Nodo<Dato>* aux = primero;
    unsigned i = 1;
    while(i < pos){
        aux = aux->obtener_sig();
        i ++;
    }
    return aux;
}

template <typename Dato>
void Lista<Dato>::mostrar(){
    for(int i = 1; i <= tam; i++){
        std::cout << this->obtener_dato(i)->obtener_nombre() << " ";
    }
    std::cout << "" << std::endl;
}

template <typename Dato>
void Lista<Dato>::reiniciar(){
    if(!lista_vacia)
        actual == 0;
    actual = primero;
}

template <typename Dato>
bool Lista<Dato>::hay_siguiente(){
    if(actual)
       return true;
    return false;
}

template <typename Dato>
Dato Lista<Dato>::siguiente(){
    Nodo<Dato>* aux = actual;
    actual = actual->obtener_siguiente();
    return aux;
}


#endif // LISTA_H_INCLUDED
