#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED

template < typename Dato >
class Nodo{

    private:
        Dato dato; // Dato a almacenar
        Nodo<Dato>* psig; // Puntero a otro nodo

    public:
         // Constructor con parametro
         // PRE: Ninguna
         // POST: Crea un nodo con el dato d y el puntero a NULL
         Nodo(Dato d);

         // Destructor
         // PRE: Nodo creado
         // POST: No hace nada
         ~Nodo();

         // PRE: el nodo tiene que estar creado y d tiene que ser un dato valido
         // POST: dato = d
         void modificar_dato(Dato d);

         // PRE: nodo creado y ps válido
         // POST: psig apuntara a ps
         void modificar_sig(Nodo<Dato>* ps);

         // PRE: nodo creado
         // POST: devuelve el dato que contiene el nodo
         Dato obtener_dato();

         // PRE: nodo creado
         // POST: Devuelve el puntero al siguiente nodo, si es el último devuelve NULL
         Nodo<Dato>* obtener_sig();
};


template < typename Dato >
Nodo<Dato>::Nodo(Dato d){
    dato = d;
    psig = 0;
}

template < typename Dato >
Nodo<Dato>::~Nodo(){

}

template < typename Dato >
void Nodo<Dato>::modificar_dato(Dato d){
    dato = d;
}

template < typename Dato >
void Nodo<Dato>::modificar_sig(Nodo* ps){
    psig = ps;
}

template < typename Dato >
Dato Nodo<Dato>::obtener_dato(){
    return dato;
}

template < typename Dato >
Nodo<Dato>* Nodo<Dato>::obtener_sig(){
    return psig;
}

#endif // NODO_H_INCLUDED
