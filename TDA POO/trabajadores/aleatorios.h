#ifndef ALEATORIOS_H_INCLUDED
#define ALEATORIOS_H_INCLUDED

#include <string>
using namespace std;

// PRE: max > min
// POST: Devuelve un numero entero al azar entre los rangos ingresados
int generar_num_azar(int MIN, int MAX);

// POST: nombre al azar de una lista
string generar_nombre();

// POST: un numero tipo double entre 5000 y 50000
double generar_sueldo();

// POST: nombre de una especialidad al azar de una lista
string generar_especialidad();

// POST: un cargo al azar de una lista
string generar_cargo();



#endif // ALEATORIOS_H_INCLUDED
