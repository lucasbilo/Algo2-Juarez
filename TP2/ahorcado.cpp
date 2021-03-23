#include "ahorcado.h"
#include "herramientas_juego.h"
#include "extras.h"
#include <iostream>
using namespace std;

// CONSTRUCTOR
Ahorcado::Ahorcado(string string_a_adivinar, int cant_intentos){
    this->cant_intentos = cant_intentos;
    long_string = string_a_adivinar.length();

    for(int i = 0; i < long_string; i++){
        palabra_a_adivinar[i] = toupper(string_a_adivinar[i]); //cada letra se carga en mayuscula
        vector_guiones[i] = '_'; // relleno el vector con guiones
    }
    cout << "CONSTRUCTOR" << endl;
    cout << "Direccion inicial del vector: " << (int *)palabra_a_adivinar <<endl;
}

// DESTRUCTOR
Ahorcado::~Ahorcado(){
    cout << "DESTRUCTOR" << endl;
    delete[] palabra_a_adivinar;
    delete[] vector_guiones;
	cout << "Direccion inicial del vector: " << (int *)palabra_a_adivinar <<endl;
}

void Ahorcado::iniciar_juego(){
    int opcion = preguntar_que_arriesga(); // 1 si arriesga letra, 2 si arriesga palabra
    if (opcion == 1){
        char letra;
        cout << "Ingrese una letra: "; cin >> letra;
        arriesgar(toupper(letra)); //paso la letra en mayuscula
    }
    else{ //arriesga palabra
        string palabra;
        cout << "Ingrese una palabra: "; cin >> palabra;
        arriesgar(cadena_toda_mayuscula(palabra)); //paso toda la palabra en mayuscula
    }
}

void Ahorcado::arriesgar(char letra){
    if(!arriesgo_esa_letra(letra)){
        bool adivino = adivino_letra(letra);
        letras_arriesgadas[cant_letras_arriesgadas] = letra; //guardo la letra arriesgada
        cant_letras_arriesgadas += 1;
        if(!adivino)
            cant_intentos -= 1;

        termino(); //veo si le quedan intentos o si adivino la palabra
    }
    else
        cout << "Ya arriesgo esa letra." << endl;
}

void Ahorcado::arriesgar(string palabra){
    if(palabra.length() == long_string){
        bool adivino = adivino_palabra(palabra);

        if(adivino)
            finalizar_juego('G');
        else{
            cout << "Palabra incorrecta!" << endl;
            cant_intentos -= 2;
            termino(); //veo si le quedan intentos
        }
    }
    else
        cout << "Cantidad de caracteres invalidos. " << endl;
}

void Ahorcado::finalizar_juego(char tipo){
    if(tipo == 'G'){ // GANO
        cout << "*************** GANASTE! :) ***************" << endl;
        cout << "La palabra que adivinaste es: " << vector_a_str('P') << endl;
        cant_intentos -= cant_intentos; //Pongo en 0 a la cantidad de intentos para finalizar el juego
    }
    else{ // PERDIO
        cout << "Te quedaste sin intentos!" << endl;
        cout << "*************** PERDISTE! :( ***************" << endl;
        cout << "La palabra que tenias que adivinar era: " << vector_a_str('P') << endl;
    }
    cout << "Muchas gracias por jugar!" << endl;
    cout << "Hasta la proxima!" << endl;
}

void Ahorcado::termino(){
    if(obtener_cant_intentos() <= 0)
        finalizar_juego('P');
    else if(adivino_palabra(vector_a_str('G'))) //verifico si adivino la palabra (letra x letra)
        finalizar_juego('G');
}


bool Ahorcado::adivino_palabra(string palabra){
    for(int i = 0; i < long_string; i++){
        if(palabra_a_adivinar[i] != palabra[i])
            return false;
    }
    return true;
}

bool Ahorcado::adivino_letra(char letra){
    bool adivino = false;
    for(int i = 0; i < long_string; i++){
        if(palabra_a_adivinar[i] == letra){
            vector_guiones[i] = letra;
            adivino = true;
        }
    }
    return adivino;
}

int Ahorcado::obtener_cant_intentos(){
    return cant_intentos;
}

void Ahorcado::imprimir_vec_guiones(){
    for(int i = 0; i < long_string; i++)
        cout << vector_guiones[i] << " ";
    cout << " " << endl;
}


void Ahorcado::imprimir_letras_arriesgadas(){
    if(cant_letras_arriesgadas == 0)
        cout << " - ";
    else{
        for(int i = 0; i < cant_letras_arriesgadas; i++)
        cout << letras_arriesgadas[i] << " - ";
    }
    cout << " " << endl;
}

bool Ahorcado::arriesgo_esa_letra(char letra){
    for(int i = 0; i < cant_letras_arriesgadas; i++){
        if(letras_arriesgadas[i] == letra)
            return true;
    }
    return false;
}


string Ahorcado::vector_a_str(char vec){
    string palabra;
    for(int i = 0; i < long_string; i++){
        if(vec == 'G')
            palabra += vector_guiones[i];
        else //palabra a adivinar
            palabra += palabra_a_adivinar[i];
    }
    return palabra;
}
