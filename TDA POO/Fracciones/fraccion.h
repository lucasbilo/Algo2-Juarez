#ifndef FRACCION_H_INCLUDED
#define FRACCION_H_INCLUDED
#include <string>
using namespace std;
class Fraccion{
private:
    int numerador; // arriba de la raya
    int denominador;

public:
    /* Constructor con parametros.
    PRE: num y den deben ser de tipo entero (int)
    POST: construye una Fraccion, donde: numerador = num y denominador = den */
    Fraccion(int num, int den);

    /*
    PRE : c es de tipo Fraccion
    POST : devuelve una nueva Fraccion , en donde:
    nuevo.numerador = numerador + c.numerador
    nuevo.denominador = denominador + c.denominador */
    Fraccion operator+(Fraccion);

    /*
    PRE : c es de tipo Fraccion
    POST : devuelve una nueva Fraccion , en donde:
    nuevo.numerador = numerador - c.numerador
    nuevo.denominador = denominador - c.denominador */
    Fraccion restar(Fraccion);

    /*
    PRE: -
    POST: modifica a la Fraccion, en donde:
    numerador = numerador / mcd
    denominador = denominador / mcd
     */
    void simplificar();

    // PRE: se debe pasar un mensaje tipo string
    // POST: muestra el mensaje pasado por parametro seguido de la fraccion
    void imprimir_fraccion(string mensaje);


};

#endif // FRACCION_H_INCLUDED
