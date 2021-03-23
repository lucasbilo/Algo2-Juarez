#include "consola.h"
#include <cstdlib>
using namespace std;

const int RANGO_MAX = 3000;
const int RANGO_MIN = 1;


int string_a_entero(string numero_tipo_string){
    int numero_tipo_int;
    numero_tipo_int = atoi(numero_tipo_string.c_str());
    return numero_tipo_int;
}

bool verifico_rangos(int numero, int minimo, int maximo){
    bool esta_en_rangos = false;

    if(numero >= minimo && numero <= maximo)
        esta_en_rangos = true;

    return esta_en_rangos;
}


bool verifico_valor(int longitud, string numero_tipo_string){
    bool valor_es_correcto = false;

    if(longitud <= 4  && verifico_que_sean_numeros(numero_tipo_string, longitud)){
        int numero_tipo_int;
        numero_tipo_int = string_a_entero(numero_tipo_string);
        valor_es_correcto = verifico_rangos(numero_tipo_int, RANGO_MIN, RANGO_MAX);
    }

    return valor_es_correcto;
}


int longitud_de_un_string(string palabra){
	return palabra.length();
}


bool verifico_que_sean_numeros(string palabra, int longitud){
    bool son_numeros = true;

    for(int i = 0; i < longitud; i++){
        if(!isdigit(palabra[i]))
            son_numeros = false;
    }
    return son_numeros;
}


string letras_numeracion_romana(int pos, int cifras, string letra1, string letra2, string letra3, string letra4){
    string letra;
    if(pos == cifras)
        letra = letra1;
    if(pos == (cifras - 1))
        letra = letra2;
    if(pos == (cifras - 2))
        letra = letra3;
    if((pos == 1) && (cifras == 4))
        letra = letra4;
    return letra;
}

string valor_a_num_romanos(int numero, int posicion, int cifras){
    string numero_transformado, letra_1, letra_2, letra_3;
    letra_1 = letras_numeracion_romana(posicion, cifras, "I", "X", "C", "M");
    letra_2 = letras_numeracion_romana(posicion, cifras, "V", "L", "D", "");
    letra_3 = letras_numeracion_romana(posicion, cifras, "X", "C", "M", "");

    switch(numero){
        case 1: numero_transformado = letra_1; break;
        case 2: numero_transformado = letra_1 + letra_1; break;
        case 3: numero_transformado = letra_1 + letra_1 + letra_1; break;
        case 4: numero_transformado = letra_1 + letra_2; break;
        case 5: numero_transformado = letra_2; break;
        case 6: numero_transformado = letra_2 + letra_1; break;
        case 7: numero_transformado = letra_2 + letra_1 + letra_1; break;
        case 8: numero_transformado = letra_2 + letra_1 + letra_1 + letra_1; break;
        case 9: numero_transformado = letra_1 + letra_3; break;
    }
    return numero_transformado;
}


string transformar_numero(string numero_a_transformar, int longitud_del_string){
    string numero_transformado;

    for(int i = 0; i < longitud_del_string; i++){
        int numero;
        string cifra_i;
        cifra_i = numero_a_transformar[i];
        numero = string_a_entero(cifra_i);
        if(numero != 0)
            numero_transformado += valor_a_num_romanos(numero, i + 1, longitud_del_string); //Paso i+1 porque i arranca en 0.
    }
    return numero_transformado;
}
