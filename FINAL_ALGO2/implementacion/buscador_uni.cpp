#include "buscador_uni.h"
#include <iostream>

using namespace std;
bool esta2(string dato, Lista<string>* lista){
    for(unsigned int i = 1; i <= lista->obtener_tam(); i++){
        if(lista->obtener_dato(i) == dato){
            return true;
        }
    }
    return false;
}

// Post: busca en �universidades� aquellas que tienen alguna carrera de la
    // lista �vocaciones� y un ranking mayor o igual a ranking_minimo.
    // Devuelve una lista con las universidades que cumplen con estas caracter�sticas.
Lista<Universidad*>* Buscador_universidades::recomendar_universidades(Lista<Universidad*>* universidades,
                                                    Lista<string>* vocaciones, unsigned int ranking_minimo){

    Lista<Universidad*>* recom = new Lista<Universidad*>();
    int tam = 1;
    for(unsigned int i = 1; i <= universidades->obtener_tam(); i++){
        if(universidades->obtener_dato(i)->obtener_ranking() >= ranking_minimo){
            unsigned int j = 1;
            while(j <= universidades->obtener_dato(i)->obtener_carreras()->obtener_tam()){
                if(esta2(universidades->obtener_dato(i)->obtener_carreras()->obtener_dato(j), vocaciones)){
                    recom->insertar(universidades->obtener_dato(i), tam);
                    tam += 1;
                    j += universidades->obtener_dato(i)->obtener_carreras()->obtener_tam(); // para cortar el ciclo
                }
                j += 1;
            }
        }
    }
    return recom;
}
