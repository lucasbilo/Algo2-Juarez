/* Leer datos de un archivo con el formato:
  NOMBRE_DEL_PAIS CANTIDAD_DE_MUERTOS CANTIDAD_DE_INFECTADOS CANTIDAD_DE_RECUPERADOS
El archivo fue llenado por día con los datos de ESE MISMO DÍA, así que puede haber países repetidos.
El nombre del archivo es "datos_coronavirus.txt" y se recibe como argumento

Se pide mostrar por pantalla cantidad de infectados, cantidad de muertos y cantidad de recuperados en total por país.
Luego indican el total mundial de infectados, muertos y recuperados.
Suponer un máximo de 52 países */

#include <iostream>
#include <fstream>

using namespace std;
const int MAX_PAISES = 52;
const string NOMBRE_ARCHIVO = "datos_coronavirus.txt";

struct Paises{
    string nombre;
    int cantidad_muertos;
    int cantidad_infectados;
    int cantidad_recuperados;
}pais[MAX_PAISES];

bool pais_esta(string nombres_paises[], string pais, int cantidad_paises,int &posicion){
    bool esta = false;
    for(int i = 0; i < cantidad_paises; i++){
        if(nombres_paises[i] == pais){
            esta = true;
            posicion = i;
        }
    }
    return esta;
}

void imprimir_totales(int cantidad_de_paises){

    int total_muertos = 0, total_recuperados = 0, total_infectados = 0;

    for(int i = 0; i < cantidad_de_paises; i++){
        cout << "El pais: " << pais[i].nombre << " tiene una cantidad de muertos de " << pais[i].cantidad_muertos;
        cout << " de infectados " << pais[i].cantidad_infectados << " y de recuperados " << pais[i].cantidad_recuperados << endl;
        total_muertos += pais[i].cantidad_muertos;
        total_recuperados += pais[i].cantidad_recuperados;
        total_infectados += pais[i].cantidad_infectados;
    }

    cout << "TOTALES MUNDIALMENTE:" << endl;
    cout << "Muertos: " << total_muertos << " | Infectados: " << total_infectados << " | Recuperados: " << total_recuperados << endl;

}


int main()
{
    ifstream archivo_de_lectura(NOMBRE_ARCHIVO);
    string paises_ya_cargados[MAX_PAISES];
    string nombre_pais;
    int muertos, infectados, recuperados;
    int cantidad_de_paises = 0;
    int posicion;

    if(!archivo_de_lectura.fail()){
        while(archivo_de_lectura >> nombre_pais){
            if(pais_esta(paises_ya_cargados, nombre_pais, cantidad_de_paises, posicion)){
                archivo_de_lectura >> muertos;
                archivo_de_lectura >> infectados;
                archivo_de_lectura >> recuperados;
                pais[posicion].cantidad_muertos += muertos;
                pais[posicion].cantidad_infectados += infectados;
                pais[posicion].cantidad_recuperados += recuperados;
            }
            else{
                pais[cantidad_de_paises].nombre = nombre_pais;
                archivo_de_lectura >> pais[cantidad_de_paises].cantidad_muertos;
                archivo_de_lectura >> pais[cantidad_de_paises].cantidad_infectados;
                archivo_de_lectura >> pais[cantidad_de_paises].cantidad_recuperados;
                paises_ya_cargados[cantidad_de_paises] = nombre_pais;
                cantidad_de_paises += 1;
            }
        }
    }

    imprimir_totales(cantidad_de_paises);

    return 0;
}


