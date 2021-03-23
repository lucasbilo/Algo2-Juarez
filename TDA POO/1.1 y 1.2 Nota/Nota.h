#ifndef NOTA_H_INCLUDED
#define NOTA_H_INCLUDED

class Nota {

private:

    int nota;

public:

    // PRE : valorInicial est� comprendido entre 1 y 10
    // POST : inicializa la Nota con el valor indicado
    Nota (int valor_inicial);


    // POST : devuelve el valor num�rico de la Nota
    int obtener_valor ();

    // POST : indica si la Nota permite o no la aprobaci�n
    bool aprobado ();

    //POST : indica si la Nota implica la desaprobaci�n
    bool desaprobado ();

    // PRE : nuevoValor est� comprendido entre 1 y 10.
    // POST : modifica el valor num�rico de la Nota , cambi�ndolo por nuevoValor , si nuevoValor
    // es superior al valor num�rico actual de la Nota .
    void recuperar(int nuevo_valor);


};

#endif // NOTA_H_INCLUDED
