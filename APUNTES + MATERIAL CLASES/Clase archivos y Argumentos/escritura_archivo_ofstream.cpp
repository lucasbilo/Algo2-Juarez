#include <iostream>
#include <fstream>

using namespace std;

const string NOMBRE_ARCHIVO = "log.txt";

void escribirEnArchivo(ofstream* archivo, string frase);

int main(){
    ofstream archivoDeEscritura(NOMBRE_ARCHIVO);

    if(!archivoDeEscritura.fail()){
        escribirEnArchivo(&archivoDeEscritura, "Se realiza el ejercicio");
        archivoDeEscritura.close();
    }

    return 0;
}

void escribirEnArchivo(ofstream* archivo, string frase){
    string anio = "2020", mes = "Abril";
    int dia = 16;
    *archivo << anio << " " << mes << " " << dia << " " << frase << endl;
}
