#include "contactos.h"
#include <iostream>
using namespace std;

void imprimir_mensaje(string mensaje){
    cout << " " << endl;
    cout << mensaje << endl;
    cout << " " << endl;
}

void cargar_datos_a_archivo(fstream* archivo, contacto_t* contactos, int cantidad_contactos){
    *archivo << cantidad_contactos << endl;
    for(int i = 0; i < cantidad_contactos; i++)
        *archivo << contactos[i].nombre << "" << contactos[i].telefono << endl;
}

int cargar_datos(fstream* archivo, contacto_t* contactos)
{
	int cantidad_contactos, i= 0;

    *archivo >> cantidad_contactos;
    cout << "CANTIDAD DE CONTACTOS: " << cantidad_contactos << endl;
    while(*archivo >> contactos[i].nombre){
        *archivo >> contactos[i].telefono;
        i++;
    }

	return cantidad_contactos;
}

void ver_todos_los_contactos(contacto_t contactos[], int cantidad_contactos){
    if(cantidad_contactos != 0){
        for(int i = 0; i < cantidad_contactos; i++){
            cout << contactos[i].nombre << endl;
            cout << contactos[i].telefono << endl;
            cout << " " << endl;
        }
    }
    else
        imprimir_mensaje("No hay contactos registrados.");
}

void eliminar_contacto(contacto_t* contactos, int &cantidad_contactos){
    long int telefono;
    cout << "Ingrese el numero del contacto a eliminar: "; cin >> telefono;

    if(contacto_existe(contactos, cantidad_contactos, telefono)){
        contacto_t* contactos_2 = new contacto_t[cantidad_contactos - 1];
        for(int i = 0; i < cantidad_contactos; i++){
            if(contactos[i].telefono != telefono){
                contactos_2[i].nombre = contactos[i].nombre;
                contactos_2[i].telefono = contactos[i].telefono;
            }
        }
        delete[] contactos;
        contactos = contactos_2;
        cantidad_contactos--;
    }else
        imprimir_mensaje("El contacto a eliminar no existe.");
}


void buscar_contacto(contacto_t* contactos, int cantidad_contactos){
    long int telefono;
    cout << "Ingrese el telefono del contacto a buscar: "; cin >> telefono;

    if(contacto_existe(contactos, cantidad_contactos, telefono)){
        for(int i = 0; i < cantidad_contactos; i++){
            if(contactos[i].telefono == telefono)
                cout << "El contacto buscado es: " << contactos[i].nombre << endl;
        }
    }else
        imprimir_mensaje("El contacto buscado no esta registrado.");
}


void agregar_contacto(contacto_t* contactos, int &cantidad_contactos){
    string nombre;
    long int telefono;
    cout << "Ingrese el nombre del contacto a agregar: "; cin >> nombre;
    cout << "Ingrese el telefono del contacto a agregar: "; cin >> telefono;

    if(!contacto_existe(contactos, cantidad_contactos, telefono)){
        contacto_t* contactos_2 = new contacto_t[cantidad_contactos + 1];
        for(int i = 0; i < cantidad_contactos; i++){
            contactos_2[i].nombre = contactos[i].nombre;
            contactos_2[i].telefono = contactos[i].telefono;

        contactos_2[cantidad_contactos + 1].nombre = nombre;
        contactos_2[cantidad_contactos + 1].telefono = telefono;

        delete[] contactos;
        contactos = contactos_2;
        cantidad_contactos++;
        }
    }else
        imprimir_mensaje("El numero ya existe en los contactos");
}

bool contacto_existe(contacto_t contactos[], int cantidad_contactos, long int telefono){
    bool existe = false;
    for(int i = 0; i < cantidad_contactos; i++){
        if(contactos[i].telefono == telefono)
            existe = true;
    }
    return existe;
}



