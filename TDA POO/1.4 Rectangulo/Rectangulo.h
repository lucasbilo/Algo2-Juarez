#ifndef RECTANGULO_H_INCLUDED
#define RECTANGULO_H_INCLUDED

class Rectangulo{
private:
    int base;
    int altura;

public:
    // Constructor con parametros
    Rectangulo(int base, int altura);

    // PRE: recibir una altura > 0
    // POST: Modifica el atributo altura con el entero pasado por parametro
    void get_altura(int altura);

    // POST: Imprime el valor de altura
    void set_altura();

    // PRE: recibir una base > 0
    // POST: Modifica el atributo base con el entero pasado por parametro
    void get_base(int base);

    // POST: Imprime el valor de baase
    void set_base();

    //POST: Devuelve un entero el cual es el perimetro del rectangulo. Perimetro = 2 (a+b)
    int perimetro_rectangulo();

    //POST: Devuelve un entero el cual es el area del rectangulo. Area = b*a
    int area_rectangulo();

};

#endif // RECTANGULO_H_INCLUDED
