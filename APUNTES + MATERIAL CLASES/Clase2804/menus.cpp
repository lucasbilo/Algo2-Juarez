#include "menus.h"
#include "contactos.h"
using namespace std;

const int RANGO_MIN_MENU = 1;
const int RANGO_MAX_MENU = 5;

bool verificar_rangos(int numero, int maximo, int minimo);


void imprimir_menu(){
    cout << "1) Ver todos los contactos" << endl;
    cout << "2) Eliminar un contacto" << endl;
    cout << "3) Agregar un contacto" << endl;
    cout << "4) Buscar un contacto (por numero)" << endl;
    cout << "5) Salir" << endl;
}


int pedir_opcion_menu(){
    int opcion;
    cout << "Ingrese el numero de la opcion a la cual quiere acceder: "; cin >> opcion;

    while(!verificar_rangos(opcion, RANGO_MAX_MENU, RANGO_MIN_MENU)){
        cout << "Opcion incorrecta, vuelva a intentarlo: "; cin >> opcion;
    }

    return opcion;
}

void ir_a_opcion(int opcion, contacto_t contactos[], int &cantidad_contactos){
    switch(opcion){
        case 1: ver_todos_los_contactos(contactos, cantidad_contactos); break;
        case 2: eliminar_contacto(contactos, cantidad_contactos); break;
        case 3: agregar_contacto(contactos, cantidad_contactos); break;
        case 4: buscar_contacto(contactos, cantidad_contactos); break;
    }
}


bool verificar_rangos(int numero, int maximo, int minimo){
    bool esta_en_rangos = false;
    if(numero <= maximo && numero >= minimo)
        esta_en_rangos = true;
    return esta_en_rangos;
}
