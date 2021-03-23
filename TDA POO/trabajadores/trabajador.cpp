#include "trabajador.h"
#include <iostream>
using namespace std;

Trabajador::Trabajador(int legajo, string nombre, int edad){
    this->legajo = legajo;
    this->nombre = nombre;
    this->edad = edad;
}

int Trabajador::obtener_edad(){
    return edad;
}

int Trabajador::obtener_legajo(){
    return legajo;
}

string Trabajador::obtener_nombre(){
    return nombre;
}

void Trabajador::mostrar(){
    //cout << "Soy un trabajador no definido ! " << endl;
}

// -----------------------------------------------------------------------

Asalariado::Asalariado(int legajo, string nombre, int edad, int sueldo) : Trabajador(legajo, nombre, edad){
    this->sueldo = sueldo;
}

int Asalariado::obtener_sueldo(){
    return sueldo;
}

void Asalariado::mostrar(){
    //cout << "Soy un trabajador asalariado." << endl;
    //cout << "Mi sueldo es: " << sueldo << endl;
}

// -----------------------------------------------------------------------


Obrero::Obrero(int legajo, string nombre, int edad, int sueldo, string cargo) : Asalariado(legajo, nombre, edad, sueldo){
    this->cargo = cargo;
}

string Obrero::obtener_cargo(){
    return cargo;
}

void Obrero::mostrar(){
    cout << "Soy un obrero! " << endl;
    cout << "Mi nombre es: " << obtener_nombre() << endl;
    cout << "Mi legajo es: " << obtener_legajo() << endl;
    cout << "Mi edad es: " << obtener_edad() << endl;
    cout << "Mi sueldo es: " << obtener_sueldo() << endl;
    cout << "Mi cargo es: " << cargo << endl;

}



// --------------------------------------------------------------------

Ingeniero::Ingeniero(int legajo, string nombre, int edad, int sueldo, string especialidad) : Asalariado(legajo, nombre, edad, sueldo){
    this->especialidad = especialidad;
}

string Ingeniero::obtener_especialidad(){
    return especialidad;
}

void Ingeniero::mostrar(){
    cout << "Soy un ingeniero! " << endl;
    cout << "Mi nombre es: " << obtener_nombre() << endl;
    cout << "Mi legajo es: " << obtener_legajo() << endl;
    cout << "Mi edad es: " << obtener_edad() << endl;
    cout << "Mi sueldo es: " << obtener_sueldo() << endl;
    cout << "Mi especialidad es: " << especialidad << endl;
}

// -------------------------------------------------------------------

Arquitecto::Arquitecto(int legajo, string nombre, int edad, int sueldo, int cant_obras) : Asalariado(legajo, nombre, edad, sueldo){
    this->cant_obras = cant_obras;
}

int Arquitecto::obtener_cant_obras(){
    return cant_obras;
}

void Arquitecto::mostrar(){
    cout << "Soy un arquitecto! " << endl;
    cout << "Mi nombre es: " << obtener_nombre() << endl;
    cout << "Mi legajo es: " << obtener_legajo() << endl;
    cout << "Mi edad es: " << obtener_edad() << endl;
    cout << "Mi sueldo es: " << obtener_sueldo() << endl;
    cout << "La cantidad de obras que realize es es: " << cant_obras << endl;
}
