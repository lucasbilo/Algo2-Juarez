#ifndef TARJETA_BAJA_H_INCLUDED
#define TARJETA_BAJA_H_INCLUDED


class TarjetaBaja{

    private:
        double saldo;
        int total_viajes_en_subte;
        int total_viajes_en_colectivo;

    public:
    // pre : saldoInicial es positivo .
    // post : saldo de la Tarjeta en saldoInicial .
    TarjetaBaja (double saldo_inicial);

    //POST: Devuelve el saldo.
    double obtener_saldo();

    // pre : monto es positivo
    // post : agrega el monto al saldo de la Tarjeta .
    void cargar(double monto);

    // pre : saldo suficiente , seccion es 1 , 2 o 3.
    // post : utiliza del saldo $12 , $13 o $13 .75 segun la seccion para un viaje en colectivo .
    void pagar_viaje_en_colectivo(int seccion);

    // pre : saldo suficiente .
    // post : utiliza $12 .50 del saldo para un viaje en subte .
    void pagar_viaje_en_subte ();

    // post : devuelve la cantidad total de viajes realizados .
    int contar_viajes ();

    // post : devuelve la cantidad de viajes en colectivo .
    int contar_viajes_en_colectivo ();

    // post : devuelve la cantidad de viajes en subte .
    int contar_viajes_en_subte ();
};

#endif // TARJETA_BAJA_H_INCLUDED
