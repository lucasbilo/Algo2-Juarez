#ifndef NOTA_H_INCLUDED
#define NOTA_H_INCLUDED

class Nota {

private:

    int nota;

public:

    // PRE : valorInicial está comprendido entre 1 y 10
    // POST : inicializa la Nota con el valor indicado
    Nota (int valor_inicial);


    // POST : devuelve el valor numérico de la Nota
    int obtener_valor ();

    // POST : indica si la Nota permite o no la aprobación
    bool aprobado ();

    //POST : indica si la Nota implica la desaprobación
    bool desaprobado ();

    // PRE : nuevoValor está comprendido entre 1 y 10.
    // POST : modifica el valor numérico de la Nota , cambiándolo por nuevoValor , si nuevoValor
    // es superior al valor numérico actual de la Nota .
    void recuperar(int nuevo_valor);


};

#endif // NOTA_H_INCLUDED
