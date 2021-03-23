#include <iostream>
#include <string>
using namespace std;

// 40) Definir un struct Persona, donde se pueda almacenar su nombre, y el número de teléfono. 

struct Persona{
	string nombre;
	int telefono;
};

/* 41) Definir un vector Agenda, en donde se pueda guardar los datos de, a lo sumo, 50 personas (definidas en el ej. anterior) y permita:
a. Cargar los datos en la Agenda.
b. Poder buscar el teléfono de una persona indicando su nombre.
c. Poder buscar el nombre de una persona indicando su teléfono.
d. Poder modificar el número de teléfono de alguna persona.
e. Poder agregar un nuevo contacto.
f. Poder dar de baja a un contacto.  */

int main(){
	
	Persona personas[50];
	
	int i = 0, telefono;
	char cargar;
	string nombre;
	
	cout << "a) Desea cargar datos en agenda? (s/n): "; cin >> cargar;
	while(cargar == 's')
	{
		cout << "Ingrese nombre: "; cin >> nombre;
		cout << "Ingrese telefono: "; cin >> telefono;
		personas[i].nombre = nombre;
		personas[i].telefono = telefono;
		i++;
		cout << "a) Desea seguir cargando datos en agenda? (s/n): "; cin >> cargar;
	}
	
	cout << "b) Escriba el nombre de la persona de la cual quiere obtener su telefono: "; cin >>nombre;
	for(int j = 0; j < i; j++){
		if(nombre == personas[j].nombre)
			cout << "El telefono de " << nombre << " es: " << personas[j].telefono << endl;
	}
	
	cout << "c) Escriba el telefono de la persona de la cual quiere saber su nombre: "; cin >>telefono;
	for(int j = 0; j < i; j++){
		if(telefono == personas[j].telefono)
			cout << personas[j].nombre << " es el nombre de la persona de la cual su numero de telefono es: " << telefono << endl;
	}
	
	cout << "d) Escriba el nombre de la persona de la cual quiere modificar su telefono: "; cin >> nombre;
	for(int j = 0; j < i; j++){
		if(nombre == personas[j].nombre)
			cout << "Escriba el nuevo numero de telefono: "; cin >> telefono;
			personas[j].telefono = telefono;
			cout << "El nuevo numero de " << personas[j].nombre << " es: " << personas[j].telefono << endl;
	}
	
	
	return 0;
}









