#include "fraccion.h"
using namespace std;

int main()
{
    Fraccion f1(9, 5);
    Fraccion f2(5, 4);
    Fraccion f3(0, 1);
    Fraccion f4(0, 1);
    f1.imprimir_fraccion("F1: ");
    f2.imprimir_fraccion("F2: ");
    f3 = f1 + f2;
    f3.imprimir_fraccion("F1 + F2: ");
    f4 = f1.restar(f2);
    f4.imprimir_fraccion("F1 - F2: ");
    f1.simplificar();
    f1.imprimir_fraccion("F1 simplificado: ");

    return 0;
}
