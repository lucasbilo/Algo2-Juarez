#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream archivo("hola.txt");
    string linea;
    int p;
    try{
        getline(archivo, linea);
        p = stoi(linea);
        archivo.close();
    }
    catch(const std::exception&){
        cout << "no existe el archivo " << endl;
    }
    return 0;
    system("PAUSE");
}
