#include <iostream>
#include "cargar_datos.h"
#include "validacion.h"
#include "menu.h"
using namespace std;
const string archivo = "figuras.txt";

int main()
{
    Lista figuras;
    cargar_datos(archivo, figuras);
    Validacion validaciones;

    Menu menu(&figuras);
    int opcion;

    do{
        menu.mostrar();
        opcion = validaciones.num_entre_rangos("Por favor ingrese una opcion: ", 1, 7);
        cout << " ------------------------------------------------- " << endl;
        menu.ir_a_opcion(opcion);
        cout << " ------------------------------------------------- " << endl;
    }while(opcion != 7);

    return 0;
}
