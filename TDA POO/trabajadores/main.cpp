#include <iostream>
#include <ctime>
#include "trabajador.h"
#include "aleatorios.h"

using namespace std;

int main()
{
    srand(time(0));
    int cant_empleados;
    cout << "Ingrese cantidad de empleados que quiere simular: "; cin >> cant_empleados;

    Trabajador* trabajadores[cant_empleados];

    // Simulo la creacion de empleados
    for (int i = 0; i < cant_empleados; i++){
        string nombre = generar_nombre();
        int edad = generar_num_azar(18, 75); //edad entre 18 y 75
        int legajo = generar_num_azar(1, 5000); //legajo entre 1 y 5000
        int sueldo = generar_num_azar(10000, 50000);

        int x = generar_num_azar(1, 3);
        if (x == 1){ // Crea un obrero
            string cargo = generar_cargo();
            trabajadores[i] = new Obrero(legajo, nombre, edad, sueldo, cargo);
        }
        else if(x == 2){ //Crea un ingeniero
            string especialidad = generar_especialidad();
            trabajadores[i] = new Ingeniero(legajo, nombre, edad, sueldo, especialidad);
        }
        else{ //Crea un arquitecto
            int cant_obras = generar_num_azar(0, 100); // cant de obras entre 0 y 100
            trabajadores[i] = new Arquitecto(legajo, nombre, edad, sueldo, cant_obras);
        }
    }

    // Los muestro
    for(int i = 0; i < cant_empleados; i++){
        cout << i << endl;
        trabajadores[i]->mostrar();
        cout << " " << endl;
    }


    // Se libera la memoria
    for (int i = 0; i < cant_empleados; i++)
        delete trabajadores[i];

    system("PAUSE");
    return 0;
}
