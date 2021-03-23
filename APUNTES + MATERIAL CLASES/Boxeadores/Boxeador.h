#ifndef BOXEADOR_H_INCLUDED
#define BOXEADOR_H_INCLUDED

#include <string>

using namespace std;

class Boxeador{
//Atributos
    private:
        int vida;
        int fuerza;
        string nombre;

//Metodos
    public:  //faltan Pre-Post para cada metodo

    //Asignar
        void asignar_vida(int vida);
        void asignar_fuerza(int fuerza);
        void asignar_nombre(string nombre);

    //Obtener
        string obtener_nombre();

    //Otros
        bool esta_knockeado();
        void recibir_golpe(int fuerza);
        void golpear(Boxeador& contrincante);
};

#endif // BOXEADOR_H_INCLUDED
