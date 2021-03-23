#ifndef ALARMA_H_INCLUDED
#define ALARMA_H_INCLUDED


class Sensor{

    private:
        bool prendido;
        bool activo;

    public:
        // post : sensor apagado .
        Sensor();

        // post : enciende el sensor .
        void encender ();

        // post : apaga el sensor .
        void apagar ();

        // post : devuelve si el sensor ha sido activado a causa de algun evento .
        virtual bool activado () = 0;

        // post : activa el sensor
        void activar ();
};

class Alarma : public Sensor{

    private:
        int codigo_seguridad;
        bool prendido;
        int movimiento;
        int contacto;
        int sonido;

    public:
        // pre : codigoSeguridad es un entero positivo
        // post : alarma apagada con el código de seguridad indicado .
        Alarma(int codigo_seguridad);

        // post : enciende la alarma.
        void encender();

        // post : si codigoSeguridad es correcto , apaga la alarma .
        void apagar(int codigo_seguridad);

        // post : devuelve si alguno de los sensores está activado .
        bool activada ();
};

#endif // ALARMA_H_INCLUDED
