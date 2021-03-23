#include "circulo.h"
#include <iostream>
using namespace std;

Circulo::Circulo(double radio) : Figura(radio)
{ }


void Circulo::mostrar(){
    cout << "Circulo: Radio = " << obtener_dim1() << " | Superficie = " << superficie() << endl;
}


double Circulo::superficie(){
    return ( 3.1415 * obtener_dim1() * obtener_dim1() );

}
