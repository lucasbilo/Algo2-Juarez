// 1) Leer un número por teclado e imprimirlo en pantalla con el siguiente cartel: “Numero ingresado" = numero.
/* #include <iostream>
using namespace std;

int main()
{
	int x;
	cout << "Ingrese un numero: " << endl;
	cin >> x;
	
	cout << "Numero ingresado: " << x << endl;
	return 0;	
} */



// 3) Escribir un programa que lea el nombre de una persona y luego lo salude. 
/*#include <iostream>
using namespace std;

int main()
{
	string nombre;
	cout << "Ingrese su nombre: " << endl;
	cin >> nombre;
	
	cout << "Hola " << nombre << "!!" << endl;
	return 0;
} */



// 5) Leer la base y la altura de un rectángulo, calcular el perímetro y la superficie. 
#include <iostream>
using namespace std;

int main(){
	int base, altura;
	cout << "Ingrese la base del rectangulo: " << endl;
	cin >> base;
	cout << "Ingrese la altura del rectangulo: " << endl;
	cin >> altura;
	
	cout << "El perimetro del rectangulo es: " << (2*base + 2*altura) << endl;
	cout << "La superficie del rectangulo es: " << (base * altura) << endl;
	return 0;
	
}
