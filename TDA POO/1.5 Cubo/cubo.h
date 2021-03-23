#ifndef CUBO_H_INCLUDED
#define CUBO_H_INCLUDED

class Cubo {

private:
    float lado; //arista
    float superficie;
    float volumen;


public:

    // PRE: lado es un flotante positivo
    // POST: inicializa el cubo a partir de la medida de lado dada
    Cubo (float lado);


    // POST: devuelve la longitud de todos los lados del cubo
    int obtener_longitud_lado();


    // PRE : lado es un valor mayor a 0.
    // POST: cambia la longitud de todos los lados del cubo
    void cambiar_longitud_lado(float lado);


    // POST: devuelve la superficie ocupada por las caras del cubo
    int obtener_superficie_cubo();


    // PRE: superficieCubo es un valor mayor a 0.
    // POST: cambia la superficie de las caras del cubo
    void cambiar_superficie_cubo(float superficie_cubo);


    // POST: devuelve el volumen que encierra el cubo
    float obtener_volumen ();


    // PRE: volumen es un valor mayor a 0.
    // POST: cambia el volumen del cubo
    void cambiar_volumen(float volumen);
};


#endif // CUBO_H_INCLUDED
