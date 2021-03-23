#include <iostream>


/*
Puntero: Variable que almacena direccion de memoria. Cuando guarda una direccion decimos que "apunta" a esa direccion;
Declaracion de un puntero: int *pi; char *pc; float *pf;

Que es un "&"?: eL & (ampersand) determina la direccion de memoria

Guardar en un puntero:
    int *p; //declaro puntero
    int x=5; //declaro variable en memoria estatica
    p = &x; //guardo en el puntero la direccion de memoria de la variable

    *p = 8; //expresion1
    x=8; //expresion2
Ambas expresiones son equivalentes. En la expresion 2 estas guardando en la variable x el numero 8.
 Por otro lado en la expresion uno tambien lo estas haciendo. Para entenderlo hay que saber el uso de el *.
 El * sirve para 2 cosas:
 1) Declarar una variable del tipo puntero.
 2) (cuando la variable ya esta declarada) el * sirve para hacer una desreferenciacion. Esto significa "dirigite
    a la direccion a la que apuntas". Dicho mas facilmente los punteros almacenan direcciones de memoria, si yo
    aplico el * accedo a esa direccion.

Igualacion de punteros:
 p1=p2; //p1 pasa a tener la direccion de memoria de p2 (esto puede ser util para el momento de vaciar un vector?)
 *p1=*p2;//el contenido de p1 pasa a tener el contenido de p2.


Vectores y punteros:
     int vec[10];
     int *p=vec;//almaceno la primer direccion de memoria del vector.
    Ingreso a posiciones:
    p[0];
    p[1];

 Memoria Dinamica: Aca se le saca juguito a los punteros.

 int *p = new int; //el new reserva memoria en el heap (parte de la memoria que es dinamica) y devuelve la direccion
                     donde se creo. Es por eso que como devuelve una direccion la guardo en un puntero
                     (recordar que un puntero almacena direcciones)

 int *p= new int[100];//creo vector dinamico
 delete[] p;//borro vector dinamico. Usar el [] pa indicar que es vector y borrarlo entero. Para borrarlo p tiene
             que apuntar al inicio del vector.

 recorrer vector=p++;

 Punteros a estructuras complejas:
 struct Empleado {
 int legajo;
 string nombre;
 float sueldo;
 }

 Declaracion: Empleado *pe= new Empleado;
 Acceder info: (*pe).legajo=145;
               pe->	legajo=145;


 Dobles puntero: Matriz dinamica: Vector de vectores punteros.
 Declaracion:
    int **matriz;
    matriz = new int*[4];//se crea el vector de vectores.
    for (int i =0;i<4;i++)
        matriz[i]=new int[5]; //creo las filas. Va a ser una matriz de 4x5

 Liberacion://proceso inverso.
    for (int i =0;i<4;i++)
        delete[]matriz[i];//se elimina cada fila
    delete[]matriz;

Extra PREGUNTAR EN CLASE:
 a)int*p=0;
   int*p=NULL;
 b) Para borrar un vector dinamico me conviene guardar la posicion de memoria inicial en un nuevo puntero y
    utilizar ese para borrar?


IMPORTANTE:
 1) SIEMPRE ACORDARSE DE BORRAR LOS DATOS
 2) (tambien es medio duda). En teoria cuando se ejecuta una funcion las variables se crean y se eliminan al
     finalizar dicha funcion.
     Tener cuidado de que si declaro alguna variable en memoria dinamica en un modulo (con un new)
     y guardo su direccion de memoria en un puntero DECLARADO DENTRO DE ESA FUNCION al terminar la funcion
     voy a perder ese puntero y por ende el comienzo de mi variable dinamica.
     Para que esto no ocurra puedo:
     1) Crear una funcion que devuelva un puntero (ver ejemplo 1)
     2) Pasar un puntero por referencia a ese modulo que crea variables en memoria dinamica. (ver ejemplo 2)

    Ejemplo 1:
    int* f() { //funcion que devuelve un puntero tipo int.
    int* p; // nace p
    p = new int; // nace una variable anónima, su dirección la guarda p
    //... (el programa hace sus cosas)
    return p;
    } // la variable p muere pero la anónima sigue viviendo

    Ejemplo 2:
    void f(int* &p) {
    p = new int; // nace una variable anónima, su dirección la guarda p
    //...
    }




 */
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
