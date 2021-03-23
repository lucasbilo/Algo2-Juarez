#include <fstream>
#include "cargar_datos.h"
using namespace std;
const char TRIANGULO = 'T';
const char RECTANGULO = 'R';
const char CIRCULO = 'C';

void cargar_datos(string archivo, Lista &lista){

    char tipo; //tipo de figura
    double dim1, dim2;

    ifstream archivo_lectura(archivo);
    if(!archivo_lectura.fail()){
        while(archivo_lectura >> tipo){
            archivo_lectura >> dim1; // base (si es rectangulo o triangulo) o radio (si es un circulo)
            switch(tipo){
                case RECTANGULO:{
                    archivo_lectura >> dim2; //altura
                    Figura *rect = new Rectangulo(dim1, dim2);
                    lista.insert(rect);
                    break;
                }
                case TRIANGULO:{
                    archivo_lectura >> dim2; //altura
                    Figura *triang = new Triangulo(dim1, dim2);
                    lista.insert(triang);
                    break;
                }
                case CIRCULO:{
                    Figura *circ = new Circulo(dim1);
                    lista.insert(circ);
                    break;
                }
            }
        }

    }
    archivo_lectura.close();
}







