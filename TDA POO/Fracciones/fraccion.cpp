#include "fraccion.h"
#include <iostream>
// PRE: Debe recibir 2 numeros tipo entero(int)
// POST: Devuelve un numero tipo entero que es el MAXIMO COMUN DIVIDOR entre los dos numeros pasados por parametro.
int max_comun_divisor(int num1, int num2);

// PRE: debe recibir 2 numeros tipo entero
// POST: devuelve el numero menor de los 2 ingresados por parametro.
int minimo(int num1, int num2);

Fraccion::Fraccion(int num, int den){
    numerador = num;
    denominador = den;
}

Fraccion Fraccion::operator+(Fraccion c){
    Fraccion aux(0, 0);
    aux.numerador = numerador + c.numerador;
    aux.denominador = denominador + c.denominador;
    return aux;
}

Fraccion Fraccion::restar(Fraccion c){
    Fraccion aux(0, 0);
    aux.numerador = numerador - c.numerador;
    aux.denominador = denominador - c.denominador;
    return aux;
}

void Fraccion::simplificar(){
    int mcd;
    mcd = max_comun_divisor(numerador, denominador);
    numerador = (numerador / mcd);
    denominador = (denominador / mcd);
}

void Fraccion::imprimir_fraccion(string mensaje){
    cout << mensaje << numerador << "/" << denominador << endl;
}

int max_comun_divisor(int num1, int num2){
    int mcd = 1, menor;
    menor = minimo(num1, num2);
    for(int i = 1; i <= menor; i++){
        if((num1 % i == 0) && (num2 % i == 0))
            mcd = i;
    }
    return mcd;
}

int minimo(int num1, int num2){
    int menor;
    if(num1 > num2)
        menor = num2;
    else
        menor = num1;
    return menor;
}
