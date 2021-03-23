#include <iostream>

using namespace std;

const int CANTIDAD_DE_PARAMETROS = 2;
const int NOMBRE = 1;

int main(int argc, char* argv[]){

    if(argc == 2){
        cout << "Hola " << argv[NOMBRE] << endl;
    } else {
        cout << "La cantidad de parametros es incorrecta" << endl;
    }
    return 0;
}
