#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <fstream>
using namespace std;

typedef struct{
    string nombre;
    long int telefono;
}contacto_t;

bool contacto_existe(contacto_t contactos[], int cantidad_contactos, long int telefono);

void cargar_datos_a_archivo(fstream* archivo, contacto_t* contactos, int cantidad_contactos);

int cargar_datos(fstream* archivo, contacto_t* contactos);

void ver_todos_los_contactos(contacto_t contactos[], int cantidad_contactos);

void agregar_contacto(contacto_t contactos[], int &cantidad_contactos);

void eliminar_contacto(contacto_t contactos[], int &cantidad_contactos);

void buscar_contacto(contacto_t contactos[], int cantidad_contactos);


#endif
