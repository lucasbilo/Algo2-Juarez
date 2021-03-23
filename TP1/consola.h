#ifndef CONSOLA_H_INCLUDED
#define CONSOLA_H_INCLUDED

#include <string>
using namespace std;

//Funcion que recibe un numero tipo string y lo devuelve como tipo entero.
int string_a_entero(string numero_tipo_string);

// Funcion que recibe un numero y rangos minimo y maximo.
// En caso que el numero se encuentre entre los rangos devuelve true, en caso contrario false.
bool verifico_rangos(int numero, int minimo, int maximo);

/* Funcion que recibe un string y su longitud. Primero verifica que el string tenga una longitud como maximo de 4 y que sea un numero.
Luego finalmente si es un numero verifica que este entre los rangos MIN y MAX (definidos como constantes)
Retorna true si pasa todas las pruebas, false en caso contrario.*/
bool verifico_valor(int longitud, string numero_tipo_string);

// Funcion que recibe un string y devuelve su longitud.
int longitud_de_un_string(string palabra);

/* Funcion que verifica uno por uno los caracteres de un string para ver que sea un numero entero.
Devuelve true si lo ingresado es un numero entero, false en caso contrario. */
bool verifico_que_sean_numeros(string palabra, int longitud);

// Función que recibe la posicion de una cifra en un numero, la cantidad total de cifras del numero y letras del sistema de numeracion romana.
// Devuelve una de las letras pasadas por parametro segun pueda tomar un numero en su posicion y cantidad de cifras en el numero a transformar.
string letras_numeracion_romana(int pos, int cifras, string letra1, string letra2, string letra3, string letra4);

// Función que recibe un numero de una cifra, la posicion del mismo en el numero a transformar y la cantidad total de cifras del numero a transformar.
// Devuelve las letras del sistema romano que toma dicho numero.
string valor_a_num_romanos(int numero, int posicion, int cifras);

// Funcion que recibe un numero como string y lo devuelve en otro string con la numeracion romana.
string transformar_numero(string numero_a_transformar, int longitud_del_string);




#endif // CONSOLA_H_INCLUDED
