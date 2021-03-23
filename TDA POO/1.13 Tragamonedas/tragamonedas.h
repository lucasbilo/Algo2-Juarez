#ifndef TRAGAMONEDAS_H_INCLUDED
#define TRAGAMONEDAS_H_INCLUDED


class Tragamonedas{
    private:
        int tambor_1;
        int tambor_2;
        int tambor_3;

    public:
        // Constructor
        Tragamonedas();

        //Destructor
        ~Tragamonedas();

        // POST: Devuelve un premio al azar, dependiendo si los tambores son iguales o no.
        int determinar_premio();

        // POST : Modifica los valores de cada tambor
        void sortear();

        // True si los 3 tambores son iguales
        bool otorgar_premio();

};

// ----------------------------------------------------------------------------------------

class Tambor : public Tragamonedas{

    private:
        int posicion;

    public:
        // Constructor
        // Post: inicializa a posicion en 0
        Tambor();

        // POST: modifica el valor de posicion con un numero aleatorio entre 1 y 8 inclusive.
        void girar();

        // POST: Devuelve el valor de posicion
        virtual int obtener_posicion() = 0;

};


#endif // TRAGAMONEDAS_H_INCLUDED
