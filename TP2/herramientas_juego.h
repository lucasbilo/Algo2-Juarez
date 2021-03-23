#ifndef HERRAMIENTAS_JUEGO_H_INCLUDED
#define HERRAMIENTAS_JUEGO_H_INCLUDED

#include <string>
using namespace std;

/* En este archivo hay funciones que son necesarias para poder dar inicio al juego */

// POST: Imprime las opciones para jugar al ahorcado.
void imprimir_menu();

//PRE: cant de jugadores debe ser 1 o 2
// POST: Modifica a palabra_a_adivinar y cant_intentos dependiendo la cantidad de jugadores
void palabra_e_intentos(int cant_jugadores, string& palabra_a_adivinar, int& cant_intentos);

// POST: Devuelve un string al azar elegido de un array de 10 strings.
string string_al_azar();

// POST: Devuelve un numero entero, que son los intentos para adivinar que el usuario tendra
int cant_intentos_al_azar();

// POST: Devuelve un string que es la palabra a adivinar. Puede tener como minima longitud 3 y maxima 15
string pedir_string();

// POST: Devuelve un entero, que será la cantidad de intentos para adivinar.
int pedir_cant_de_intentos();

// POST: Devuelve 1 si el usuario va a arriesgar una letra, 2 si arriesga palabra completa
int preguntar_que_arriesga();

#endif // HERRAMIENTAS_JUEGO_H_INCLUDED
