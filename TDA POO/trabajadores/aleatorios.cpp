#include "aleatorios.h"
using namespace std;

string generar_nombre(){
    string nombre[] = {"Luis", "Silvina", "Lucas", "Tomas", "Mia", "Francisco", "Maria", "Luisina", "Jorge", "Federico"};
    int x = rand() % 8;
    return nombre[x];
}


int generar_num_azar(int MIN, int MAX){
    return (MIN + rand()%((MAX + 1) - MIN));
}
string generar_especialidad(){
    string especialidad[] = {"Quimica", "Informatica", "Mecanica", "Civil", "Naval", "Industrial", "Petroleo", "Alimentos"};
    int x = rand() % 8;
    return especialidad[x];
}

string generar_cargo(){
    string cargo[] = {"Capataz", "Pintor", "Techista", "Jardinero", "Maestro mayor de obras", "Constructor"};
    int x = rand() % 6;
    return cargo[x];
}


