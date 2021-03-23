#include <iostream>
#include "Rectangulo.h"

using namespace std;

int main()
{
    int area, perimetro;
    Rectangulo rec(5, 4);
    perimetro = rec.perimetro_rectangulo();
    area = rec.area_rectangulo();
    cout << "Perimetro: " << perimetro << " y area " << area << endl;
    rec.set_altura();
    rec.set_base();
    rec.get_altura(1);
    rec.get_base(9);
    rec.set_altura();
    rec.set_base();

    system("PAUSE");
    return 0;
}
