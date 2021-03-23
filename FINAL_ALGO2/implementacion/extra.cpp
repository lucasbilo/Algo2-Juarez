using namespace std;


bool esta(string dato, Lista<string>* lista){
    for(int i = 1; i<=lista->obtener_tam(); i++){
        if(lista->obtener_dato(i) == dato)
            return true;
    }
    return false;
}
