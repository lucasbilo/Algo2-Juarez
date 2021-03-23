#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED


class Circulo{

public:
    double radio;

private:
    // PRE: radio tiene que ser positivo
    // POST: inicializa al circulo con el radio indicado
    Circulo(double radio);


    // PRE: radio tiene que ser positivo
    // POST: modifica el valor de radio
    void modificar_radio(double radio);

    // POST: devuelve el valor del radio
    double obtener_radio();

    // POST: devuelve el valor del diametro
    double obtener_diametro();

    // POST: devuelve el valor del perimetro
    double obtener_perimetro();

    // POST: devuelve el valor de la superficie
    double obtener_superficie();


};

#endif // CIRCULO_H_INCLUDED
