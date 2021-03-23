#include <iostream>
#include "Nota.h"
using namespace std;

int main()
{
    Nota nota1(4);
    int nota = nota1.obtener_valor();
    cout << nota << endl;
    bool aprobo = nota1.aprobado();
    cout << aprobo << endl;
    nota1.recuperar(9);
    int nota_nueva = nota1.obtener_valor();
    cout << nota_nueva << endl;
    return 0;
}
