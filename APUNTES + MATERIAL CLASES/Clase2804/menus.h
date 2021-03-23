#ifndef MENUS_H_INCLUDED
#define MENUS_H_INCLUDED

#include <iostream>
#include "contactos.h"

// Pide una opcion numerica al usuario del menu al cual quiere ingresar.
int pedir_opcion_menu();

// Imprime el menu de opciones
void imprimir_menu();

// Se va a la opcion ingresada.
void ir_a_opcion(int opcion, contacto_t contactos[], int &cantidad_contactos);

#endif
