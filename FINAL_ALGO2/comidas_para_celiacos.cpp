/*
Post: busca en “comidas” aquellas que tienen algún ingrediente de la lista “ingredientes_permitidos” y
 ninguno de la lista “ingredientes_no_permitidos” y que tengan una caloría menor a “caloría_maxima”.

Devuelve un puntero a una lista con los alimentos que cumplen con estas características.
*/
Lista<Alimento*>* Buscador_de_comidas::comidas_para_celiacos(Lista<Alimento*>* comidas,
    Lista<string>* ingredientes_permitidos, Lista<string>* ingredientes_no_permitidos, unsigned int caloria_maxima){

    Lista<Alimento*>* celiacos = new Lista<Alimento*>();
    int tam_ceal = 0;
    for(unsigned int i = 1; i <= comidas->obtener_tam(); i++){
        if(comidas->obtener_dato(i)->obtener_calorias() < caloria_maxima){
            int aux2 = 0, aux3 = 0;
            for(int j = 1; j <= comidas->obtener_dato(i)->obtener_ingredientes()->obtener_tam(); j++){
                string ingrediente = comidas->obtener_dato(i)->obtener_ingredientes()->obtener_dato(j);
                if(esta_en_lista(ingrediente, ingredientes_permitidos))
                    aux2 += 1;
                if(esta_en_lista(ingrediente, ingredientes_no_permitidos))
                   aux3 += 1;
            }
            if(aux2 >= 1 && aux3 == 0){
                tam_ceal += 1;
                celiacos->insertar(comidas->obtener_dato(i), tam_ceal);
            }
        }
    }
    return celiacos;
}

// FUNCION EXTRA, deberia ir en otro CPP (no es una funcion de Buscador_de_comidas )
// PRE: la lista recibida por parametro debe tener tamaño mayor a 0
// POST: Recorre la lista, en caso de que el dato recibido por parametro es igual a alguno de los datos que guarda la lista
// devuelve TRUE. En caso contrario devuelve FALSE.
bool esta_en_lista(string dato, Lista<string>* lista){
    for(unsigned int i = 1; i <= lista->obtener_tam(); i++){
        if(lista->obtener_dato(i) == dato)
            return true;
    }
    return false;
}












