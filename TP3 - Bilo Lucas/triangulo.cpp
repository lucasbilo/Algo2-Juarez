#include "triangulo.h"
#include <iostream>
using namespace std;

Triangulo::Triangulo(double base, double altura) : Figura(base, altura)
{ }

void Triangulo::mostrar(){
    cout << "Triangulo: Base = " << obtener_dim1() << " | Altura = " << obtener_dim2() << " | Superficie = " << superficie() << endl;
}


double Triangulo::superficie(){
    return ( ( obtener_dim1() * obtener_dim2() ) / 2 );
}
