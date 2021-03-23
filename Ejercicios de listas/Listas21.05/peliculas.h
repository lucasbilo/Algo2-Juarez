#ifndef PELICULAS_H_INCLUDED
#define PELICULAS_H_INCLUDED

class Pelicula{

    private:
        string nombre;
        string director;
        int recaudacion;
        float puntaje;

    public:
        //Constructor
        Pelicula(string director, string nombre, int recaudacion, float puntaje);


};


#endif // PELICULAS_H_INCLUDED
