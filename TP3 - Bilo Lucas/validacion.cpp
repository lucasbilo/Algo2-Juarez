#include "validacion.h"
#include <iostream>
using namespace std;

double Validacion::num_positivo(string mensaje){
    double num;
    cout << mensaje;
    cin >> num;
    while(num < 0){
        cout << "Numero negativo, vuelva a intentarlo: ";
        cin >> num;
    }
    return num;
}

int Validacion::num_entre_rangos(string mensaje, int min, int max){
    int num;
    cout << mensaje;
    cin >> num;
    while((num < min) || (num > max)){
        cout << "Numero ingresado fuera de rango, vuelva a intentarlo: ";
        cin >> num;
    }
    return num;
}
