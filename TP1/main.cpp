#include "consola.h"
#include <fstream>

using namespace std;

const string NOMBRE_ARCHIVO_A_LEER = "valores.txt";
const string NOMBRE_ARCHIVO_ROMANOS = "romanos.txt";
const string NOMBRE_ARCHIVO_DE_ERRORES = "log.txt";


int main(int argc, char* argv[])
{
    string nombre_de_archivo_a_leer;
    if(argc == 2)
        nombre_de_archivo_a_leer = argv[1];
    else
        nombre_de_archivo_a_leer = NOMBRE_ARCHIVO_A_LEER;

    ifstream archivo_de_lectura(nombre_de_archivo_a_leer);
    ofstream archivo_numeracion_romana(NOMBRE_ARCHIVO_ROMANOS);
    ofstream archivo_de_errores(NOMBRE_ARCHIVO_DE_ERRORES);
    string numero_a_transformar, numero_transformado;
    int longitud_string;

    if(!archivo_de_lectura.fail()){
        while(archivo_de_lectura >> numero_a_transformar){
            longitud_string = longitud_de_un_string(numero_a_transformar);
            if(verifico_valor(longitud_string, numero_a_transformar)){
                numero_transformado = transformar_numero(numero_a_transformar, longitud_string);
                archivo_numeracion_romana << numero_transformado << endl;
            }
            else
                archivo_de_errores << numero_a_transformar << endl;
        }
    }

    archivo_de_lectura.close();
    archivo_numeracion_romana.close();
    archivo_de_errores.close();

    return 0;
}












