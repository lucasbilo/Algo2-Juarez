#ifndef TRABAJADOR_H_INCLUDED
#define TRABAJADOR_H_INCLUDED

using namespace std;
#include <string>

class Trabajador{ //Clase padre
    private:
        int legajo;
        string nombre;
        int edad;
    public:

        Trabajador(int legajo, string nombre, int edad);
        int obtener_edad();
        int obtener_legajo();
        string obtener_nombre();
        virtual void mostrar() = 0;
        virtual ~Trabajador() {};

};
// --------------------------------------------------------------------

class Asalariado : public Trabajador{

    private:
        int sueldo;

    public:
        Asalariado(int legajo, string nombre, int edad, int sueldo);
        int obtener_sueldo();
        void mostrar();
};

// --------------------------------------------------------------------

class Obrero : public Asalariado{

    private:
        string cargo;

    public:
        Obrero(int legajo, string nombre, int edad, int sueldo, string cargo);
        string obtener_cargo();
        void mostrar();
};

// --------------------------------------------------------------------

class Ingeniero : public Asalariado{

    private:
        string especialidad;

    public:
        Ingeniero(int legajo, string nombre, int edad, int sueldo, string especialidad);
        string obtener_especialidad();
        void mostrar();
};

// --------------------------------------------------------------------

class Arquitecto : public Asalariado{

    private:
        int cant_obras;

    public:
        Arquitecto(int legajo, string nombre, int edad, int sueldo, int cant_obras);
        void mostrar();
        int obtener_cant_obras();
};
#endif // TRABAJADOR_H_INCLUDED
