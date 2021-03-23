#include "lista.h"
#include <iostream>

using namespace std;

Lista::Lista(){
    primero = 0;
    tam = 0;
    actual = 0;
}

Lista::Lista(Lista& lista){
    this->tam = lista.obtener_tam();
    this->primero = lista.obtener_nodo(1);
}

Lista::~Lista(){
    while(!(lista_vacia()))
        eliminar(1);
}

bool Lista::lista_vacia(){
    return (primero == 0);
}

void Lista::insertar(Dato d, int pos){
    Nodo* pnodo = new Nodo(d);

    if(pos == 1){
        pnodo->modificar_siguiente(primero);
        primero = pnodo;
    }else{
        Nodo* anterior = obtener_nodo(pos-1);
        pnodo->modificar_siguiente(anterior->obtener_siguiente());
        anterior->modificar_siguiente(pnodo);
    }
    tam++;
}


Dato Lista::obtener_dato(int pos){
    Nodo* paux = primero;
    unsigned i = 1;
    while (i < pos && paux->obtener_siguiente()){
        paux = paux->obtener_siguiente();
        i++;
    }
    return paux->obtener_dato();
}

void Lista::eliminar(int pos){
    Nodo* paux = primero;
    if (pos == 1 || !(primero->obtener_siguiente())){
        primero = paux->obtener_siguiente();
    }
    else{
        unsigned i = 1;
        Nodo* pant;
        while (i < pos && paux->obtener_siguiente()){
            pant = paux;
            paux = paux->obtener_siguiente();
            i++;
        }
        pant->modificar_siguiente(paux->obtener_siguiente());
    }
    delete paux;
    tam--;
}

int Lista::obtener_tam(){
    return tam;
}


void Lista::cambiar_dato(Dato d, int pos){
    Nodo* aux = primero;
    unsigned i = 1;
    while(i < pos){
        aux = aux->obtener_siguiente();
        i ++;
    }
    aux->modificar_dato(d);
}

Nodo* Lista::obtener_nodo(unsigned pos){
    Nodo* aux = primero;
    unsigned i = 1;
    while(i < pos){
        aux = aux->obtener_siguiente();
        i ++;
    }
    return aux;
}

void Lista::mostrar(){
    for(int i = 1; i <= tam; i++)
        cout << this->obtener_dato(i) << " ";
    cout << "" <<endl;
}



/* IMPLEMENTACION DE LISTAS */

/* 1) M�todo que, dadas dos posiciones, intercambia sus datos.  */
// se podria verificar si las posiciones son correctas, depende de la PRE CONDICION
void Lista::intercambiar_datos(int pos1, int pos2){
    Dato aux = obtener_dato(pos1);
    this->cambiar_dato(obtener_dato(pos2), pos1);
    this->cambiar_dato(aux, pos2);
}


/* 2) M�todo que une la lista original con otra que se pasa por par�metro, modificando a la lista que llama.
La lista pasada por par�metro va al final. */
/*void Lista::insertar_lista(Lista lista){
    int tam_aux = this->tam;
    for(int i = 1; i <= lista.obtener_tam(); i++){
        this->insertar(lista.obtener_dato(i), tam_aux +1);
        tam_aux += 1;
    }
}*/


/* 3) M�todo que une la lista original con otra que se pasa por par�metro y devuelve un puntero a la nueva lista.
La lista pasada por par�metro va al final. */
/*
Lista* Lista::insertar_lista(Lista& lista2){
    Lista* lista_nueva = new Lista;
    for(int i = 1; i <= this->tam; i++){ //agrego los elementos de la lista original a la nueva
        this->insertar(this->obtener_dato(i), i);
    } o lista_nueva = this;
    int tam_aux = lista_nueva->obtener_tam();
    for(int i = 1; i <= lista2.obtener_tam(); i++){ //agrego los elementos de la lista pasada por parametro a la nueva
        this->insertar(lista2.obtener_dato(i), tam_aux +1);
        tam_aux += 1;
    }
    return lista_nueva;
} */

/* 4) M�todo que revierte la lista, modific�ndola (el �ltimo elemento pasa al primer lugar, etc). */
/*void Lista::invertir_lista(){
    Lista aux;
    int j = 1, k = tam;
    while(k > 0){
        aux.insertar(this->obtener_dato(k), j);
        k--;
        j++;
    }
    for(int i = 1; i <= aux.obtener_tam(); i++)
        this->cambiar_dato(aux.obtener_dato(i), i);
}*/


/* 5) M�todo que revierte la lista en una nueva lista, y devuelve un puntero de la misma. */
Lista* Lista::invertir_lista(){
    Lista* invertida = new Lista();
    int j = 1;
    int k = tam;
    while(k > 0){
        invertida->insertar(this->obtener_dato(k), j);
        k--;
        j++;
    }
    return invertida;
}



/* 6) M�todo que recibe una lista por par�metro, ambas (la original y la del par�metro) est�n
ordenadas, se hace un merge entre las dos, modificando la original, que tiene que quedar
ordenada y sin elementos repetidos. Para comparar se usa un m�todo de Dato
(comparar), ejemplo a.comparar_con(b). Este m�todo devuelve -1 si a es menor que b; 1,
si a es mayor que b; y 0 si son iguales.  */
int comparar(int a, int b){
    if(a < b)
        return -1;
    else if(a > b)
        return 1;
    return 0;
}
void Lista::merge_ordenado(Lista& lista2){
    int i = 1, j = 1;
    while(i <= tam && j <= lista2.obtener_tam()){
        if(comparar(obtener_dato(i), lista2.obtener_dato(j)) == 1){
            insertar(lista2.obtener_dato(j), i);
            j++;
        }
        else if(comparar(obtener_dato(i), lista2.obtener_dato(j)) == -1){
            i++;
        }
        else{ //son iguales
            i++;
            j++;
        }
    }
    while(j <= lista2.obtener_tam()){ //puede terminar el ciclo por i pero quedan elem en lista2
            insertar(lista2.obtener_dato(j), i);
            j++;
            }
}


/* 7) M�todo que elimina un dato: se pasa un dato por par�metro y se elimina la primera
ocurrencia. Usar el m�todo comparar. Si no lo encuentra no hace nada. */
void Lista::elim_prim_ocurrencia(Dato dato){
    for(int i = 1; i <= tam; i++){
        if(comparar(obtener_dato(i), dato) == 0){
            eliminar(i);
            break;
        }
    }
}


/* 8) M�todo que elimina todas las ocurrencias del dato. */
void Lista::elim_todas_ocurrencias(Dato dato){
    int i = 1;
    while(i <= tam){
        if(comparar(obtener_dato(i), dato) == 0)
            eliminar(i);
        else
            i++;
    }
}

/*9) M�todo que recibe una lista por par�metro y devuelve un puntero a una nueva lista que
es A � B (los elementos de A que no est�n en B), donde A es la lista original y B es la del par�metro. */

Lista* Lista::lista_resta(Lista& lista2){
    Lista* lista3 = new Lista();
    int aux = 1;
    for(int i = 1; i <= tam; i++){
        bool esta = false;
        for(int j = 1; j <= tam; j++){
            if(comparar(obtener_dato(i), lista2.obtener_dato(j)) == 0)
                esta = true;
        }
        if(!esta){
            lista3->insertar(obtener_dato(i), aux);
            aux++;
        }
    }
    return lista3;
}


// ///////////////////////////////////////////////////////////////////////////////////////////////////

void Lista::reiniciar(){
    if(!lista_vacia)
        actual == 0;
    actual = primero;
}

bool Lista::hay_siguiente(){
    if(actual)
       return true;
    return false;
}
// devuelve el siguiente elemento (el elemento que apunta actual)
// PRE: hay_siguiente tiene que haber devuelto true previamente
// POS: devuelve el elemento actual y avanza
Dato Lista::siguiente(){
    Nodo* aux = actual;
    actual = actual->obtener_siguiente();
    return aux;
}













