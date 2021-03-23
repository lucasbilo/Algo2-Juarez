#include <iostream>
using namespace std;
// 13) Imprimir por pantalla una lista de 20 números consecutivos, los cuales comienzan con un número ingresado por teclado. 
/* int main()
{
	int numero, i;
	cout << "Ingrese un numero: " << endl;
	cin >> numero;
	cout << "Lista de numeros: " << endl;
	for (i = numero; i < (numero + 20); i++)
		cout << i << endl;
	return 0;
} */

// 15) Leer una serie de números reales, terminando la serie con un cero. Imprimir los datos a medida que se los ingresa junto con la suma parcial de los mismos.
/*int main()
{
	int sumatoria, numero;
	cout << "Ingrese un numero: " << endl;
	cin >> numero;
	while (numero != 0){
		sumatoria += numero;
		cout << "Suma parcial de los numeros: " << sumatoria << endl;
		cout << "Ingrese un numero: " << endl;
		cin >> numero;
	}
	cout << "Suma final de los numeros: " << sumatoria << endl;
	return 0;
} */

// 17) Leer un valor N y luego N números enteros. Se pide imprimir el mayor y el menor y las veces que aparece cada uno. 
/*int main()
{
	int cantidad, i, mayor, menor, cont_mayor, cont_menor, numero;
	
	cout << "Ingrese un valor entero: " << endl;
	
	cin >> cantidad;
	menor = 10;
	mayor = 0;
	
	for (i = 0; i < cantidad; i++)
	{
		cout << "Ingrese un numero: " << endl;
		cin >> numero;
		if (numero > mayor){
			cont_mayor = 1;
			mayor = numero;
		}
		else if (numero < menor){
			cont_menor = 1;
			menor = numero;
		}
		else if (numero == menor){
			cont_menor += 1;
		}
		else if (numero == mayor){
			cont_mayor += 1;
		}
		
	}
	cout << "El numero mayor ingresado es " << mayor << " y aparece una cantidad de veces de " << cont_mayor << endl;
	cout << "El numero menor ingresado es " << menor << " y aparece una cantidad de veces de " << cont_menor << endl;
	return 0;
}*/

// 19) Dada una serie de números enteros terminada en cero, imprimir los tres mayores. 
/*int main(){
	int a, b, c, numero;
	cout << "Ingrese un numero: " << endl;
	cin >> numero;
	a = numero;
	while (numero != 0)
	{
		if (numero > a){
			c = b;
			b = a;
			a = numero;
		}
		else if (numero > b){
			c = b;
			b = numero;
		}
		else if (numero > c)
			c = numero;
		cout << "Ingrese un numero: " << endl;
		cin >> numero;
	}
	cout << "Los 3 mayores numeros ingresados son: " << a << " " << b << " " << c << endl;
	return 0;

}*/

// 21) Escribir un algoritmo que lea una serie de números reales y verifique si están ordenados en forma ascendente, descendente o si no están ordenados.
/*int main()
{
	int cantidad, i, cont_asc, cont_desc;
	cout << "Ingrese la cantidad de numeros que va a ingresar: " << endl;
	cin >> cantidad;
	for (i = 0; i < cantidad; i++)
	{
		int num, num_ant;
		cout << "Ingrese un numero: " << endl;
		cin >> num;
		if (num > num_ant){
			cont_asc += 1;
			num_ant = num;
		}
		else if (num < num_ant){
			cont_desc += 1;
			num_ant = num;
		}
	}
	if (cont_asc == cantidad)
		cout << "Los numeros estan en forma ascendente" << endl;
	else if (cont_desc == cantidad)
		cout << "Los numeros estan en forma descendente" << endl;
	else
		cout << "Los numeros estan desordenados" << endl;
		
	return 0;
}*/

//23) Leer N y luego N lotes de números reales que terminan con un valor 0, y calcular la media individual de cada lote, 
// junto con la media total de todos los números ingresados. 
int main()
{
	int cantidad, i;
	int sumatoria_total = 0;
	int contador_total = 0;
	cout << "Ingrese la cantidad de lotes que va a ingresar: " << endl;
	cin >> cantidad;
	for (i = 0; i < cantidad; i++)
	{
		int contador = 0;
		int sumatoria = 0;
		int numero;
		cout << "Ingrese un numero: " << endl;
		cin >> numero;
		while (numero != 0)
		{
			contador += 1;
			sumatoria += numero;
			cout << "Ingrese un numero: " << endl;
			cin >> numero;
		}
		sumatoria_total += sumatoria;
		contador_total += contador;
		cout << "La media del lote numero " << (i + 1)  << " es de " << (sumatoria / contador) << endl;
	}
	cout << "La media total de todos los numeros ingresados es de " << (sumatoria_total / contador_total) << endl;
	return 0;
}


