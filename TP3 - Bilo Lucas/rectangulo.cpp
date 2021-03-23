#include "rectangulo.h"
#include <iostream>
using namespace std;

Rectangulo::Rectangulo(double base, double altura) : Figura(base, altura)
{ }


void Rectangulo::mostrar(){
    cout << "Rectangulo: Base = " << obtener_dim1() << " | Altura = " << obtener_dim2() << " | Superficie = " << superficie() << endl;
}


double Rectangulo::superficie(){
    return ( obtener_dim1() * obtener_dim2() );
}
