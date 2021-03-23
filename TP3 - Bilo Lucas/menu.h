#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include "validacion.h"
#include "lista.h"
#include "triangulo.h"
#include "rectangulo.h"
#include "circulo.h"

class Menu{

    private: //Atributos
        Lista* figuras;
        Validacion validar; //para tener los metodos de validacion

    public: //Metodos

        // Constructor
        // Pre: la lista debe estar inicializada
        // Post: inicializa al atributo figuras.
        Menu(Lista* figuras);

        //Post: Imprime el menu de opciones.
        void mostrar();

        // PRE: opcion debe estar entre 1 y 6
        // POST: Depende la opcion se llama a una funcion:
        // 1) consultar_pos // 2) dar_baja_pos // 3) agregar_figura
        // 4) listar_figuras // 5) superficie_max // 6) superficie_min
        void ir_a_opcion(int opcion);

    private: //Metodos

        // POST: Pide una posicion de la lista, y llama a la funcion mostrar() de la figura que se encuentra en dicha posicion
        void consultar_pos();

        // POST: Pide una posicion de la lista y elimina la figura que se encuentra en dicha posicion
        void dar_baja_pos();

        // Post: Agrega a la lista una figura con sus dimensiones, la cual es pedida al usuario.
        void agregar_figura();

        // POST: Imprime el contenido de toda la lista figuras.
        // Indica el tipo de figura, sus atributos y superficie.
        void listar_figuras();

        // POST: Imprime la superficie maxima de las figuras que se encuentran en la lista
        void superficie_max();

        // POST: Imprime la superficie min de las figuras que se encuentran en la lista
        void superficie_min();
};

#endif // MENU_H_INCLUDED
