#ifndef VALIDACION_H_INCLUDED
#define VALIDACION_H_INCLUDED
// Este objeto esta destinado a tener metodos que sean validaciones.
#include <string>

class Validacion{

    public:
        //Constructor
        // POST: Inicializa al objeto.
        Validacion(){};

        // PRE: mensaje sera mostrado al usuario
        // POST: Pide al usuario un flotante. Si este es negativo, se le vuelve a pedir y así sucesivamente ...
        // Devuelve el numero (positivo)
        double num_positivo(std::string mensaje);

        // PRE: max >= min // mensaje sera mostrado al usuario
        // POST: Pide al usuario un numero entero. Si el numero ingresado no esta entre los rangos, se lo vuelve a pedir, y así sucesivamente..
        // Devuelve el numero ingresado por el usuario (el que esta entre los rangos pasados por parametro)
        int num_entre_rangos(std::string mensaje, int min, int max);

};


#endif // VALIDACION_H_INCLUDED
