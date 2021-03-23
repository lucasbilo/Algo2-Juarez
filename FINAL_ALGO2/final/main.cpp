#include <iostream>
#include "lista.h"
using namespace std;

int main()
{
    cout << "Practica para el final de ALGO2" << endl;
    Lista lista;
    lista.insertar(1, 1);
    lista.insertar(2, 2);
    lista.insertar(4, 3);
    lista.insertar(4, 4);
    cout << "LISTA 1" << endl;
    lista.mostrar();

    /*cout << "Intercambio posicion 1 con 3" << endl;
    lista.intercambiar_datos(1, 3);
    for(unsigned i = 1; i <= lista.obtener_tam(); i++){
        cout << lista.obtener_dato(i) << endl;
    } */

    Lista lista2;
    lista2.insertar(2, 1);
    lista2.insertar(2, 2);
    lista2.insertar(6, 3);
    lista2.insertar(8, 4);
    cout << "LISTA 2" << endl;
    lista2.mostrar();

    lista1.insertar_lista(lista2);
    /*Lista* lista3 = new Lista();
    cout << "INSERTO LISTA 2 EN LA LISTA 1, Y DEVUELVO UN PUNTERO A LISTA!!" << endl;
    lista3 = lista.insertar_lista(lista2);
    for(unsigned i = 1; i <= lista3->obtener_tam(); i++){
        cout << lista3->obtener_dato(i) << " ";
    }
    delete lista3;*/
 /*
    cout << "INVIERTO LA LISTA 1 EN LISTA 3" << endl;
    Lista* lista3 = new Lista();
    lista3 = lista.invertir_lista();
    lista3->mostrar();


    lista.merge_ordenado(lista2);
    lista.mostrar();

    cout << "ELIMINO TODOS LOS 2 DE LA LISTA 2" << endl;
    lista2.elim_todas_ocurrencias(2);
    lista2.mostrar(); */

    /*cout << "1 - 2 " << endl;
    Lista* lista4 = new Lista();
    lista4 = lista.lista_resta(lista2);
    lista4->mostrar();

    //delete lista3;
    delete lista4;*/
    system("PAUSE");
    return 0;
}
