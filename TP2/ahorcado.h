#ifndef AHORCADO_H_INCLUDED
#define AHORCADO_H_INCLUDED

#include <string>
using namespace std;

class Ahorcado{

    private: //atributos

        int long_string; // longitud del string a adivinar
        char* palabra_a_adivinar = new char[long_string];
        char* vector_guiones = new char[long_string]; //Este vector sera el que se le vaya mostrando al usuario a medida que avance el juego
        int cant_intentos;
        char letras_arriesgadas[26]; //le puse 26 que son la cantidad de letras que existen (sin contar la enie)
        int cant_letras_arriesgadas = 0;

    public: //funciones

        //CONTRUCTOR
        // PRE: la palabra debe tener longitud minima 3 y max 15, cantidad de intentos >= 3
        // POST: Inicializa a Ahorcado
        Ahorcado(string string_a_adivinar, int cant_intentos);

        // DESTRUCTOR
        // POST: libera la memoria usada
        ~Ahorcado();

        // POST: Da inicio al juego. Pregunta que va a arriesgar y llama al arriesgar() correspondiente
        void iniciar_juego();

        // POST: Devuelve un entero que es la cantidad de intentos
        int obtener_cant_intentos();

        // POST: Imprime por pantalla el contenido de cada posicion de vector_guiones
        void imprimir_vec_guiones();

        // POST: Imprime por pantalla las letras que el usuario ya arriesgo
        void imprimir_letras_arriesgadas();


    private: //funciones

        // PRE: la letra recibida debe estar escrita en mayuscula
        // POST : Si la letra no fue arriesgada anteriormente se procede a lo siguiente:
        // Si la letra se encuentra en la palabra a adivinar, modifica al vector_guiones y pone la letra en la posicion correspondiente.
        // Si no se encuentra la letra en la palabra a adivinar se le resta 1 a cant_intentos
        // Al finalizar esto se llama a termino()
        void arriesgar(char letra);

        // PRE: el string recibido debe estar todo en mayuscula
        // POST: Si la palabra tiene la misma longitud que la palabra a adivinar se procede a lo siguiente:
        // Si la palabra pasada por parametro coincide con la palabra a adivinar se llama a finalizar_juego('G'),
        // en caso contrario resta 2 a cant_intentos y se llama a termino()
        void arriesgar(string palabra);

        // PRE: tipo debe ser 'G' si gano el juego, otra letra significa que perdio
        // POST: Si tipo == 'G' se modifica: cant_intentos = 0.
        // Imprime un mensaje al usuario informando que gano o perdio, segun corresponda
        void finalizar_juego(char tipo);

        // POST: Verifica si intentos = 0, en caso de que sea verdadero llama a finalizar_juego('P')
        // Si lo anterior no sucede se verifica si vector_con_guiones[i] == palabra_a_adivinar[i] (para todo 0<i<long_string),
        // y si esto es verdadero se llama a finalizar_juego('G')
        // En caso de que no sucede nada de lo anterior no se hace nada.
        void termino();

        // PRE: palabra debe tener la misma longitud que la palabra a adivinar y debe estar toda en mayuscula
        // POST: Si palabra es igual a la palabra a adivinar devuelve TRUE, en caso contrario FALSE
        bool adivino_palabra(string palabra);

        // POST: Si palabra_a_adivinar[i] == letra entonces hace la siguiente modificacion
        // ector_guiones[i] == letra y devuelve TRUE.
        //En caso de que palabra_a_adivinar[i] != letra, no hace nada y devuelve FALSE
        bool adivino_letra(char letra);

        // PRE: letra debe estar en mayuscula
        // POST: Devuelve TRUE si la letra se encuentra en el atributo letras_arriesgadas.
        // FALSE en caso contrario.
        bool arriesgo_esa_letra(char letra);

        // PRE: vec = 'G' para referirse a vector_guiones, otra letra para referirse al vector palabra_a_adivinar
        // POST: Devuelve un string con el contenido del vector correspondiente
        string vector_a_str(char vec);

};

#endif // AHORCADO_H_INCLUDED
