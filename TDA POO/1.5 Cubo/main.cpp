#include <iostream>
#include "cubo.h"

using namespace std;

int main()
{
    int lado, superficie;
    float volumen;
    Cubo cubo(5);
    lado = cubo.obtener_longitud_lado();
    superficie = cubo.obtener_superficie_cubo();
    volumen = cubo.obtener_volumen();
    cout << "INICIALIZADO con lado 5" << endl;
    cout << "Lado(5): " << lado << ", superficie(150): " << superficie << " y volumen(125): " << volumen << endl;

    cubo.cambiar_longitud_lado(10);
    lado = cubo.obtener_longitud_lado();
    superficie = cubo.obtener_superficie_cubo();
    volumen = cubo.obtener_volumen();
    cout << "Cambio lado a 10" << endl;
    cout << "Lado(10): " << lado << ", superficie(600): " << superficie << " y volumen(1000): " << volumen << endl;

    cubo.cambiar_superficie_cubo(96);
    lado = cubo.obtener_longitud_lado();
    superficie = cubo.obtener_superficie_cubo();
    volumen = cubo.obtener_volumen();
    cout << "Cambio superficie a 96" << endl;
    cout << "Lado(4): " << lado << ", superficie(96): " << superficie << " y volumen(64): " << volumen << endl;


    cubo.cambiar_volumen(512);
    lado = cubo.obtener_longitud_lado();
    superficie = cubo.obtener_superficie_cubo();
    volumen = cubo.obtener_volumen();
    cout << "Cambio volumen por 512" << endl;
    cout << "Lado(8): " << lado << ", superficie(384): " << superficie << " y volumen(512): " << volumen << endl;

    system("PAUSE");
    return 0;
}
