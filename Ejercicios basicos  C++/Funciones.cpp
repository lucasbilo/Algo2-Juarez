#include <iostream>
#include <math.h>
using namespace std;

//25) Hacer una función que devuelva las raíces reales de un polinomio de segundo grado y además indique si tiene o no raíces reales. 
// Si no tuviera raíces reales, devolverá 0 en ambas. 
/*int tiene_raices_reales(int a, int b, int c);
void raices_polinomio_segundo_grado(int a, int b, int c);

int main()
{
	int x, y, z;
	
	cout << "Ingrese numero cuadratico: " << endl;
	cin >> x;
	cout << "Ingrese numero lineal: " << endl;
	cin >> y;
	cout << "Ingrese numero independiente: " << endl;
	cin >> z;
	
	if (tiene_raices_reales(x, y, z) == 1)
		raices_polinomio_segundo_grado(x, y, z);
	else
		cout << "No tiene raices reales" << endl;
		
	return 0;
}

int tiene_raices_reales(int a, int b, int c)
{
	int discriminante;
	discriminante = (pow(b, 2) - (4 * a * c));
    if (discriminante >= 0)
        return 1;
   return 0;
}

void raices_polinomio_segundo_grado(int a, int b, int c)
{
	double raiz_uno, raiz_dos;
	raiz_uno = (-b + pow((pow(b, 2) - (4 * a * c)), 0.5)) / (2 * a);
    raiz_dos = (-b - pow((pow(b, 2) - (4 * a * c)), 0.5)) / (2 * a);
    cout << "Las raices son " << raiz_uno << " y " << raiz_dos << endl;
}*/

// 27) Hacer una función que indique si un número es primo o no. 
void es_primo_o_no(int);

int main(){
	int num;
	cout << "Ingrese numero: " << endl;
	cin >> num;
	es_primo_o_no(num);
	return 0;
}

void es_primo_o_no(int numero)
{
	int contador = 0, i;
    for (i = 1; i < numero + 1; i++)
	{
    	if ((numero % i) == 0)
		contador += 1;
	}
    if (contador == 2)
        cout << "El numero es primo" << endl;
    else
        cout << "El numero no es primo" << endl;
}
