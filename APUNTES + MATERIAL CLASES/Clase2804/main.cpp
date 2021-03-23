#include <iostream>
#include "contactos.h"
#include "menus.h"
#include <fstream>

using namespace std;
const string NOMBRE_ARCHIVO = "agenda.txt";
const int OPCION_SALIR = 5;


int main()
{
    int opcion, cantidad_contactos;
    fstream archivo(NOMBRE_ARCHIVO, ios::in|ios::out);
    if(!archivo.fail()){
        contacto_t* contactos = new contacto_t[30];
        cantidad_contactos = cargar_datos(&archivo, contactos);

        do{
            imprimir_menu();
            opcion = pedir_opcion_menu();
            ir_a_opcion(opcion, contactos, cantidad_contactos);
        }while(opcion != OPCION_SALIR);

        // ACTUALIZAR ARCHIVO
        cargar_datos_a_archivo(&archivo, contactos, cantidad_contactos);
        archivo.close();
        delete[] contactos;
    }else
        cout << "El archivo no pudo abrirse correctamente." << endl;
    cout << "Hasta la proxima!" << endl;
    return 0;
}

