#include <iostream>
#include "ahorcado.h"
#include "herramientas_juego.h"
#include "extras.h"

using namespace std;

int main()
{
    int cant_jugadores, cant_intentos, sistema;
    string palabra_a_adivinar;

    sistema = preguntar_sistema(); // Pregunto para poder usar el clear_screen(limpiar pantalla)
    clear_screen(sistema);
    imprimir_menu();
    cant_jugadores = pedir_opcion_uno_o_dos(); //Se define si son 1 o 2 jugadores
    palabra_e_intentos(cant_jugadores, palabra_a_adivinar, cant_intentos); //Se define la palabra a adivinar y cantidad de intentos
    clear_screen(sistema);

    Ahorcado ahorcado(palabra_a_adivinar, cant_intentos);
    cout << "A JUGAR !" << endl;
    //system("pause"); //para que se pueda mirar la direccion inicial en el constructor.
    while(ahorcado.obtener_cant_intentos() > 0){
        clear_screen(sistema);
        cout << "Palabra a adivinar: "; ahorcado.imprimir_vec_guiones();
        cout << "A usted le quedan " << ahorcado.obtener_cant_intentos() << " intentos." << endl;
        cout << "Letras arriesgadas: "; ahorcado.imprimir_letras_arriesgadas();

        ahorcado.iniciar_juego();
    }

    system("pause");
    return 0;
}
