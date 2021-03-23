#include <iostream>
#include <math.h>
using namespace std;

// 29) Desarrollar una función que devuelva en un vector los números primos entre 2 y 200. Reutilizar lo que ya se escribió y probó. 
/*bool es_primo(int);

int main()
{
	int i, vec[200], contador = 0;
	for(i = 2; i < 200; i++){
		if(es_primo(i) == true)
		{
			vec[contador] = i;
			contador += 1;
		}
	}
	for(i = 0; i < contador; i++)
		cout << "Numero primo entre 2 y 200 es: " << vec[i] << endl;
	return 0;
}

bool es_primo(int numero)
{
	int contador = 0, i;
    for (i = 1; i < numero + 1; i++)
	{
    	if ((numero % i) == 0)
			contador += 1;
	}
    if (contador == 2)
        return true;
    return false;
}*/

// 30) Dados dos vectores A y B, de N elementos cada uno, se desean calcular: a. El vector suma. // b. El producto escalar. 
/*int main()
{
	int cantidad, i, num1, num2;
	cout << "Ingrese la cantidad de elementos que tendran los vectores: "; cin >> cantidad;
	int vec_a[cantidad], vec_b[cantidad], vec_suma[cantidad], vec_producto[cantidad];
	cout << "VECTOR A" << endl;
	for(i = 0; i < cantidad; i++)
	{
		cout << "Ingrese el numero que va en la posicion " << i + 1 << ":"; cin >> num1;
		vec_a[i] = num1;
	}
	cout << "VECTOR B" << endl;
	for(i = 0; i < cantidad; i++)
	{
		cout << "Ingrese el numero que va en la posicion " << i + 1 << ":"; cin >> num2;
		vec_b[i] = num2;
	}
	for(i = 0; i < cantidad; i++)
	{
		vec_suma[i] = (vec_a[i] + vec_b[i]);
		vec_producto[i] = (vec_a[i] * vec_b[i]);
	}
	for(i = 0; i < cantidad; i++)
		cout << "En la posicion " << i + 1 << " en el vector A esta " << vec_a[i] << " ,en el B " << vec_b[i] << " en la suma " << vec_suma[i] << " y en producto " << vec_producto[i] << endl;
	return 0;
}*/


// 34) Si los números de un vector representan los coeficientes de un polinomio (de grado no mayor a 10), escribir un algoritmo que calcule 
// la especialización de ese polinomio con un número que elige el usuario.

/*int main()
{
	int cantidad, i, j, coeficiente, numero, especializacion = 0;
	
	cout << "Ingrese la cantidad de coeficientes que tiene su polinomio (no mayor a 10): "; cin >> cantidad;
	
	int vector[cantidad];
	
	for(i = 0; i < cantidad; i++)
	{
		cout << "Por favor ingrese el coeficiente del polinomio (menor a mayor) que corresponde a la posicion " << i + 1 << ":"; cin >> coeficiente;
		vector[i] = coeficiente;
	}
	cout << "Por favor ingrese el numero para calcular la especializacion del polinomio: "; cin >> numero;
	for(j = 0; j < cantidad; j++)
		especializacion += (vector[j] * pow(numero, (j + 1)));
	cout << "La especializacion del numero " << numero << " en el polinomio es " << especializacion << endl;
	return 0;
}*/

// 35) Escribir un algoritmo que halle una matriz C como suma de dos matrices A y B. La
// dimensión de las matrices de M × N se lee como dato (suponer un MAX para fila y columna). 

/*int main(){
	
	int fila, columna, i, j;
	
	cout << "Ingrese la dimension de las filas "; cin >> fila;
	cout << "Ingrese la dimension de las columnas "; cin >> columna;
	
	int a[fila][columna], b[fila][columna], c[fila][columna];
	
	cout << "Ingrese datos de la matriz A: " << endl;
	for(i = 0; i < fila; i++){
		for(j = 0; j < columna; j++){
			int numero;
			cout << "Fila nro. " << i+1 << " y columna nro. " << j+1 << " : "; cin >> numero;
			a[i][j] = numero;
		}
	}
	
	cout << "Ingrese datos de la matriz B: " << endl;
	for(i = 0; i < fila; i++ ){
		for(j = 0; j < columna; j++){
			int numero;
			cout << "Fila nro. " << i+1 << " y columna nro. " << j+1 << " : "; cin >> numero;
			b[i][j] = numero;
		}
	}
	
	for(i = 0; i < fila; i++ ){
		for(j = 0; j < columna; j++)
			c[i][j] = (a[i][j] + b[i][j]);
	}
	
	for(i = 0; i < fila; i++ ){
		for(j = 0; j < columna; j++)
			cout << "Fila nro. " << i+1 << " y columna nro. " << j+1 << " | A: " << a[i][j] << "| B: " << b[i][j] << " | C: " << c[i][j] << endl;
	}
	return 0;
}*/


// 37) Escribir un programa que calcule la traza de una matriz cuadrada.
/*
int main(){
	
	int dimension, i, j, traza = 0;
	
	cout << "Ingrese la dimension de la matriz CUADRADA: "; cin >> dimension;
	
	int matriz[dimension][dimension];
	
	cout << "Ingrese los datos de la matriz." << endl;
	for(i = 0; i < dimension; i++)
	{
		for(j = 0; j < dimension; j++)
		{
			int numero;
			cout << "Fila nro. " << i+1 << " y columna nro. " << j+1 << " : "; cin >> numero;
			matriz[i][j] = numero;
		}
	}
	
	for(i = 0; i < dimension; i++)
	{
		for(j = 0; j < dimension; j++)
		{
			if(i == j)
				traza += matriz[i][j];
		}
	}
	cout << "La traza de la matriz ingresada es: " << traza << endl;
	return 0;
}*/

// 39) Escribir un algoritmo que construya un vector con los valores mínimos de cada una de las filas de una matriz. 

int main(){
	
	int fila, columna, i, j;
	
	cout << "Ingrese la dimension de las filas "; cin >> fila;
	cout << "Ingrese la dimension de las columnas "; cin >> columna;
	
	int matriz[fila][columna], vector[fila];
	
	cout << "Ingrese datos de la matriz:" << endl;
	for(i = 0; i < fila; i++)
	{
		for(j = 0; j < columna; j++)
		{
			int numero;
			cout << "Fila nro. " << i+1 << " y columna nro. " << j+1 << " : "; cin >> numero;
			matriz[i][j] = numero;
		}
	}
	
	for(i = 0; i < fila; i++)
	{
		int numero_anterior = matriz[i][0];
		for(j = 0; j < columna; j++)
		{
			if(numero_anterior > matriz[i][j])
				numero_anterior = matriz[i][j];
		}
		vector[i] = numero_anterior;
	}
	
	for(i=0; i < fila; i++)
		cout << "Vector! Fila nro. " << i << " con el valor de " << vector[i] << endl;
	
	return 0;
		
}






























