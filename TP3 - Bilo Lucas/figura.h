#ifndef FIGURA_H_INCLUDED
#define FIGURA_H_INCLUDED

class Figura{

    private:
        double dim_1;
        double dim_2;

    public:
        // Constructor
        // PRE: dim1 > 0 y dim2 > 0
        // POST: inicializa las variables dim_1 y dim_2.
        // En caso de que no se pase por parametro dim_2, esta toma un valor por default igual a 0
        Figura(double dim1, double dim2 = 0);

        // POST: Devuelve el valor de dim1
        double obtener_dim1();

        // POST: Devuelve el valor de dim2
        double obtener_dim2();

        virtual ~Figura() {};

        virtual void mostrar() = 0;

        virtual double superficie() = 0;

};

#endif // FIGURA_H_INCLUDED
