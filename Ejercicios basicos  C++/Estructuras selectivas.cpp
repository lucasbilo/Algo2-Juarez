#include <iostream>
using namespace std;
// 6) Leer un número real y decir si es mayor, menor o igual a cero.
/*int main()
{
	int numero;
	cout << "Ingrese un numero: " << endl;
	cin >> numero;
	
	if (numero > 0)
		cout << "El numero ingresado es mayor a 0!" << endl;
	else if (numero < 0)
		cout << "El numero ingresado es menor a 0!" << endl;
	else
		cout <<"El numero ingresado es igual a 0!" << endl;
	return 0;
}*/

// 9) Escribir un algoritmo que determine si un número M es divisible por N. 
/*int main()
{
	int x, y;
	cout << "Ingrese un numero: " << endl;
	cin >> x;
	cout << "Ingrese otro numero distinto del cero: " << endl;
	cin >> y;
	if (x % y == 0)
		cout << "El numero " << x << " es divisible por " << y << endl;
	else
		cout << "El numero " << x << " NO es divisible por " << y << endl;
	return 0;
}*/

// 11) Formar un menú de 4 opciones y, al elegir una de ellas, saldrá un cartel diciendo qué opción se eligió o si fue una opción incorrecta. 
int main()
{
	int opcion;
	cout << "MENU !!" << endl;
	cout << "1) Opcion 1" << endl;
	cout << "2) Opcion 2" << endl;
	cout << "3) Opcion 3" << endl;
	cout << "4) Opcion 4" << endl;
	
	cout << "Ingrese la opcion a la cual quiere ingresar: " << endl;
	cin >> opcion;
	
	switch (opcion){
		case 1: cout <<"Ingreso a la opcion 1" << endl; break;
		case 2: cout <<"Ingreso a la opcion 2" << endl; break;
		case 3: cout <<"Ingreso a la opcion 3" << endl; break;
		case 4: cout <<"Ingreso a la opcion 4" << endl; break;
		default: cout <<"La opcion ingresada no es correcta" << endl;
	}
	return 0;	
}

