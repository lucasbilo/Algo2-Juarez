#include "herramientas_juego.h"
#include "extras.h"
#include <iostream>
#include <cstdlib> //incluye a la funcion rand() y srand()
#include <ctime> //incluye a la funcion time()
using namespace std;

const int MAX_CARACTERES = 15; //Cantidad maxima de caracteres que puede tener el string a adivinar
const int MIN_CARACTERES = 3; //Cantidad minima de caracteres que puede tener el string a adivinar
const int MAX_INTENTOS = 12; //Cantidad maxima de intentos que el usuario tiene para adivinar
const int MIN_INTENTOS = 3; //Cantidad minima de intentos que el usuario tiene para adivinar

void imprimir_menu(){
    cout << "Bienvenido a el Ahorcado!" << endl;
    cout << "Opciones de juego disponibles:" << endl;
    cout << "1) Un jugador." << endl;
    cout << "2) Dos jugadores." << endl;
}

void palabra_e_intentos(int cant_jugadores, string& palabra_a_adivinar, int& cant_intentos){
    if(cant_jugadores == 1){
        palabra_a_adivinar = string_al_azar();
        cant_intentos = cant_intentos_al_azar();
    }
    else{ // 2 jugadores
        palabra_a_adivinar = pedir_string();
        cant_intentos = pedir_cant_de_intentos();
    }
}

string string_al_azar(){
    srand(time(NULL));
    string vector[10] = {"remera", "facultad", "computacion", "fernet", "basquet", "mapa", "algoritmos", "botella", "pais", "elefante"};
    int posicion = rand()%10; // Es un numero al azar entre 0 y 9
    return vector[posicion];
}

int cant_intentos_al_azar(){
    srand(time(NULL));
    return MIN_INTENTOS + rand()%(MAX_INTENTOS + 1 - MIN_INTENTOS);
}

string pedir_string(){
    string palabra;
    cout << "La palabra a adivinar debe tener como minimo " << MIN_CARACTERES << " de caracteres y como maximo " << MAX_CARACTERES << " caracteres." << endl;
    cout << "Por favor, a continuacion eliga la palabra que su oponente debera elegir: "; cin >> palabra;

    while(!esta_en_rangos(palabra.length(), MAX_CARACTERES, MIN_CARACTERES)){
        cout << "Por favor, ingrese una palabra con cantidad de caracteres dentro del rango mencionado anteriormente: "; cin >> palabra;
    }
    return palabra;
}

int pedir_cant_de_intentos(){
    int intentos;
    cout << "Ingrese la cantidad de intentos que tendra su oponente, como minimo " << MIN_INTENTOS << " y como maximo " << MAX_INTENTOS << " :";
    cin >> intentos;
    while(!esta_en_rangos(intentos, MAX_INTENTOS, MIN_INTENTOS)){
        cout << "Por favor, ingrese un numero dentro del rango mencionado anteriormente: "; cin >> intentos;
    }
    return intentos;
}

int preguntar_que_arriesga(){
    cout << "Opciones para arriesgar:" << endl;
    cout << "1) 1 letra (si falla se le restara 1 intento)" << endl;
    cout << "2) Palabra completa (si falla se le restara 2 intentos)" << endl;
    return pedir_opcion_uno_o_dos();
}



