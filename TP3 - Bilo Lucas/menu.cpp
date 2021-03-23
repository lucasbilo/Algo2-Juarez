#include "menu.h"
#include <iostream>
using namespace std;

const char TRIANGULO = 'T';
const char RECTANGULO = 'R';
const char CIRCULO = 'C';

Menu::Menu(Lista* figuras){
    this->figuras = figuras;
}

void Menu::mostrar(){
    cout << "Opciones disponibles: " << endl;
    cout << "1) Consultar que figura hay en determinada posicion." << endl;
    cout << "2) Dar de baja una figura indicando su posicion en la lista." << endl;
    cout << "3) Agregar una nueva figura a la lista." << endl;
    cout << "4) Listar todos las figuras." << endl;
    cout << "5) Indicar la superficie maxima." << endl;
    cout << "6) Indicar la superficie minima." << endl;
    cout << "7) Salir." << endl;
    cout << " " << endl;
}

void Menu::ir_a_opcion(int opcion){
    switch(opcion){
        case 1: consultar_pos(); break;
        case 2: dar_baja_pos(); break;
        case 3: agregar_figura(); break;
        case 4: listar_figuras(); break;
        case 5: superficie_max(); break;
        case 6: superficie_min(); break;
    }
}

void Menu::consultar_pos(){
    cout << "Hay cargadas " << figuras->obtener_tam() << " figuras." << endl;
    int pos = validar.num_entre_rangos("Ingrese posicion a consultar (1 para referirse a la primer posicion): ", 1, figuras->obtener_tam());
    figuras->obtener_dato(pos)->mostrar();
}

void Menu::dar_baja_pos(){
    cout << "Hay cargadas " << figuras->obtener_tam() << " figuras." << endl;
    int pos = validar.num_entre_rangos("Ingrese posicion a eliminar (1 para referirse a la primer posicion): ", 1, figuras->obtener_tam());
    cout << "Se elimino la siguiente figura: " << endl;
    figuras->obtener_dato(pos)->mostrar();
    figuras->eliminar_dato(pos);
}

void Menu::agregar_figura(){
    char tipo;
    double dim1, dim2;

    cout << "Ingrese el tipo de figura a agregar ('C' para circulo, 'T' para triangulo o 'R' para rectangulo) : ";
    cin >> tipo;
    while ((toupper(tipo) != CIRCULO) && (toupper(tipo) != TRIANGULO) && (toupper(tipo) != RECTANGULO)){
        cout << "Tipo incorrecto, vuelva a intentarlo: ";
        cin >> tipo;
    }

    if(toupper(tipo) == CIRCULO){
        dim1 = validar.num_positivo("Ingrese el radio: ");
        Figura *circ = new Circulo(dim1);
        figuras->insert(circ);
    }
    else{
        dim1 = validar.num_positivo("Ingrese la base: ");
        dim2 = validar.num_positivo("Ingrese la altura: ");
        if(toupper(tipo) == TRIANGULO){
            Figura *triang = new Triangulo(dim1, dim2);
            figuras->insert(triang);
        }
        else{
            Figura *rect = new Rectangulo(dim1, dim2);
            figuras->insert(rect);
        }
    }
}

void Menu::listar_figuras(){
    for(int i = 1; i <= int(figuras->obtener_tam()); i++)
        figuras->obtener_dato(i)->mostrar();
}

void Menu::superficie_max(){
    double sup_max = 0;
    for(int i = 1; i <= int(figuras->obtener_tam()); i++){
        if(figuras->obtener_dato(i)->superficie() > sup_max)
        sup_max = figuras->obtener_dato(i)->superficie();
    }
    cout << "De todas las superficies de las figuras, la mayor es de: " << sup_max << endl;
}

void Menu::superficie_min(){
    double sup_min = figuras->obtener_dato(1)->superficie(); //asigno un valor para comparar con el
    for(int i = 2; i <= int(figuras->obtener_tam()); i++){
        if(figuras->obtener_dato(i)->superficie() < sup_min)
        sup_min = figuras->obtener_dato(i)->superficie();
    }
    cout << "De todas las superficies de las figuras, la menor es de: " << sup_min << endl;
}




