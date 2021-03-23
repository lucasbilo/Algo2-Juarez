#include <iostream>
#include <cctype> //incluye a la funcion toupper()
#include "extras.h"

using namespace std;

int preguntar_sistema(){
    cout << "Hola! Antes de empezar tengo una pregunta para usted/es, en que sistema operativo esta ejecutando el programa? " << endl;
    cout << "1) Windows" << endl;
    cout << "2) Linux" << endl;
    return pedir_opcion_uno_o_dos();
}


void clear_screen(int sistema){
    if(sistema == 1) //Windows
        system("cls");
    else //Linux
        system("clear");
}


int pedir_opcion_uno_o_dos(){
    int opcion;
    cout << "Por favor, ingrese una opcion (1 o 2): "; cin >> opcion;

    while((opcion != 1) && (opcion != 2)){
        cout << "Por favor, ingrese una opcion correcta: "; cin >> opcion;
    }
    cout << " " << endl;
    return opcion;
}

bool esta_en_rangos(int numero, int max, int min){
    if((numero >= min) && (numero <= max))
        return true;
    return false;
}

string cadena_toda_mayuscula(string cadena){
    for(int i = 0; i < cadena.length(); i++)
        cadena[i] = toupper(cadena[i]);
    return cadena;
}
