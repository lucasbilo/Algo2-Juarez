#include "figura.h"

Figura::Figura(double dim1, double dim2){
    dim_1 = dim1;
    dim_2 = dim2;
}

double Figura::obtener_dim1(){
    return dim_1;
}

double Figura::obtener_dim2(){
    return dim_2;
}
