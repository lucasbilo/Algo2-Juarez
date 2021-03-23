#include <iostream>
#include "listas.h"

using namespace std;

const string archivo = "peliculas.txt";

int main()
{
    ifstream archivo_lectura(archivo);
    Lista peliculas;

    if(!archivo_lectura){
        string director, pelicula;
        double puntaje, recaudacion;
        while(archivo_lectura >> director){
            archivo_lectura >> pelicula;
            archivo_lectura >> puntaje;
            archivo_lectura >> recaudacion;

        }

    }

    return 0;
}
