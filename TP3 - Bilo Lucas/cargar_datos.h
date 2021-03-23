#ifndef CARGAR_DATOS_H_INCLUDED
#define CARGAR_DATOS_H_INCLUDED

#include "lista.h"
#include "triangulo.h"
#include "rectangulo.h"
#include "circulo.h"

// PRE: La lista debe estar inicializada
// POST: Abre y lee los datos del archivo, se crean punteros a un objeto tipo Rectangulo, Circulo o Triangulo segun corresponda,
// y se los va cargando a la lista. Se cierra el archivo.
void cargar_datos(std::string archivo, Lista &lista);


#endif // CARGAR_DATOS_H_INCLUDED
