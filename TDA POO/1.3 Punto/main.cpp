#include <iostream>
#include "punto.h"
using namespace std;

int main()
{
    bool eje_x, eje_y, origen;
    Punto punto1(5, 4);
    punto1.consultar_coordenadas();

    punto1.cambiar_coordenadas(0,5);
    punto1.consultar_coordenadas();
    eje_x = punto1.esta_sobre_eje_x();
    cout << "X: " << eje_x << endl;

    punto1.cambiar_coordenadas(3,0);
    punto1.consultar_coordenadas();
    eje_y = punto1.esta_sobre_eje_y();
    cout << "Y: " << eje_y << endl;

    punto1.cambiar_coordenadas(0,0);
    origen = punto1.esta_sobre_origen();
    punto1.consultar_coordenadas();
    cout << "ORIGEN: " << origen << endl;

    punto1.cambiar_coordenadas(5,5);
    punto1.consultar_coordenadas();
    int distancia = punto1.distancia_al_origen();
    cout << "distancia al origen: " << distancia << endl;


    return 0;
}
