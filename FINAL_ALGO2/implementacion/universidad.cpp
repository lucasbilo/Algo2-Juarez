#include "universidad.h"


Universidad::Universidad(std::string nombre, int ranking, Lista<std::string>* carreras){
    this->nombre = nombre;
    this->ranking = ranking;
    this->carreras = carreras;
}

std::string Universidad::obtener_nombre(){
    return nombre;
}

unsigned int Universidad::obtener_ranking(){
    return ranking;
}

Lista<std::string>* Universidad::obtener_carreras(){
    return carreras;
}
