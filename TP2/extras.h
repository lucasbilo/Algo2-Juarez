#ifndef EXTRAS_H_INCLUDED
#define EXTRAS_H_INCLUDED

#include <string>
using namespace std;

/* En este archivo se encuentran funciones extras, que no tienen nada que ver con el juego Ahorcado */

// POST: Devuelve un entero que puede tomar unicamente dos valores: 1 si el usuario esta en Windows o 2 si esta en Linux
int preguntar_sistema();

// PRE: el entero recibido debe ser 1 (Windows) o 2(Linux)
// POST: Limpia la consola
void clear_screen(int sistema);

// POST: Pide opcion al usuario y la devuelve. Unicamente puede ser 1 o 2.
int pedir_opcion_uno_o_dos();

// PRE: max >= min
//POST: Devuelve TRUE si el numero pasado por parametro esta entre los rangos max y min. En caso contrario devuelve FALSE.
bool esta_en_rangos(int numero, int max, int min);

// POST: Devuelve la cadena recibida pero con todos sus caracteres en mayuscula
string cadena_toda_mayuscula(string cadena);

#endif // EXTRAS_H_INCLUDED
