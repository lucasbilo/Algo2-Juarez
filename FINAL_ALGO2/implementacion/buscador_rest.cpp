#include "buscador_rest.h"

using namespace std;
bool esta3(string dato, Lista<string>* lista){
    for(unsigned int i = 1; i <= lista->obtener_tam(); i++){
        if(lista->obtener_dato(i) == dato){
            return true;
        }
    }
    return false;
}

Lista<Restaurante*>* Buscador_restaurantes::recomendar_restaurantes(Lista<Restaurante*>* restaurantes,
                                                   Lista<string>* platos_deseados, int precio_maximo){
    Lista<Restaurante*>* recom = new Lista<Restaurante*>();
    int tam_aux = 0;
    for(int i = 1; i<= restaurantes->obtener_tam(); i++){
        if(restaurantes->obtener_dato(i)->obtener_precio_promedio() <= precio_maximo){
            int aux = 0;
            for(int j = 1; j<= restaurantes->obtener_dato(i)->obtener_platos()->obtener_tam(); j++){
                if(esta3(restaurantes->obtener_dato(i)->obtener_platos()->obtener_dato(j), platos_deseados))
                    aux += 1;
            }
            if(aux >= 2){
                tam_aux += 1;
                recom->insertar(restaurantes->obtener_dato(i), tam_aux);
            }
        }
    }

    return recom;
}
