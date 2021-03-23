#ifndef PUNTO_H_INCLUDED
#define PUNTO_H_INCLUDED

class Punto{

private:
    int coordenadas[2];

public:

    //Constructor con parametro
    // Inicializa las coordenadas, en caso de que no se pasen parametros se inicializa con 0 y 0.
    Punto(int x, int y);

    // POST: Imprime las coordenadas
    void consultar_coordenadas();


    //PRE: Las coordenadas nuevas deben ser validas
    //POST: Cambia las coordenadas actuales por las pasadas por parametr
    void cambiar_coordenadas(int x, int y);

    //POST: Devuelve true si la coordenadas (0,y), false en caso contrario
    bool esta_sobre_eje_x();

    //POST: Devuelve true si la coordenadas son (x,0) , false en caso contrario
    bool esta_sobre_eje_y();

    //POST: Devuelve true si la coordenadas son (0,0), false en caso contrario
    bool esta_sobre_origen();

    //POST: Devuelve la distancia de las coordenadas con respecto al origen.
    int distancia_al_origen();

};

/* Implementar la clase Punto. Un Punto en el plano posee
coordenada X y coordenada Y. Proporcionar métodos para:

consultar las coordenadas
cambiar las coordenadas
saber si el punto está sobre el eje de las X
saber si el punto está sobre el eje de las Y
saber si el punto es el origen de coordenadas.
Indicar su distancia al origen
*/

#endif // PUNTO_H_INCLUDED
