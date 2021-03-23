#include <iostream>
#include "alimento.h"
#include "universidad.h"
#include "buscador_uni.h"
#include "buscador_rest.h"
#include "lista.h"
using namespace std;

int main(){
    /*
    Lista<string>* i1 = new Lista<string>();
    i1->insertar("Queso", 1);
    i1->insertar("Jamon", 2);
    i1->insertar("Harina", 3);
    Alimento* a1 = new Alimento("Pizza", 1000, i1);

    Lista<string>* i2 = new Lista<string>();
    i2->insertar("Queso", 1);
    i2->insertar("Tomate", 2);
    i2->insertar("Harina", 3);
    Alimento* a2 = new Alimento("Empanada", 500, i2);

    Lista<Alimento*>* com = new Lista<Alimento*>();
    com->insertar(a1, 1);
    com->insertar(a2, 2);

    Lista<string>* p = new Lista<string>();
    p->insertar("Jamon", 1);
    p->insertar("Queso", 2);

    Lista<string>* no_p = new Lista<string>();
    no_p->insertar("Harina", 1);

    Buscador_de_comidas busc;
    Lista<Alimento*>* cel = new Lista<Alimento*>();
    cel = busc.comidas_para_celiacos(com, p, no_p, 1001);

    for(int i = 1; i <= cel->obtener_tam(); i++){
        cout << cel->obtener_dato(i)->obtener_nombre() << endl;
    }

    delete i1;
    delete a1;
    delete i2;
    delete a2;
    delete com;
    delete p;
    delete no_p;
    delete cel; */

/*
    Lista<string>* c1 = new Lista<string>();
    c1->insertar("informatica", 1);
    c1->insertar("quimica", 2);
    c1->insertar("civil", 3);
    Universidad* uni1 = new Universidad("FIUBA", 5, c1);

    Lista<string>* c2 = new Lista<string>();
    c2->insertar("medicina", 1);
    c2->insertar("quimica", 2);
    c2->insertar("dentista", 3);
    Universidad* uni2 = new Universidad("FMED", 7, c2);

    Lista<string>* c3 = new Lista<string>();
    c3->insertar("abogaciiia", 1);
    c3->insertar("escribano", 2);
    Universidad* uni3 = new Universidad("FD", 77, c3);

    Lista<Universidad*>* unis = new Lista<Universidad*>();
    unis->insertar(uni1, 1);
    unis->insertar(uni2, 2);
    unis->insertar(uni3, 3);

    Lista<string>* voc = new Lista<string>();
    voc->insertar("quimica", 1);
    voc->insertar("abogacia", 2);

    Lista<Universidad*>* recom = new Lista<Universidad*>();
    Buscador_universidades b;
    recom = b.recomendar_universidades(unis, voc, 5);

    for(unsigned int i = 1; i <= recom->obtener_tam(); i++){
        cout << recom->obtener_dato(i)->obtener_nombre() << endl;;
    }

    delete c1;
    delete c2;
    delete c3;
    delete uni1;
    delete uni2;
    delete uni3;
    delete recom;
    delete voc;
    delete unis;*/

    /*Lista<string>* p1 = new Lista<string>();
    p1->insertar("pizza", 1);
    p1->insertar("milanga", 2);
    p1->insertar("lomo", 3);
    Restaurante* r1 = new Restaurante("La marina", 500, p1);

    Lista<string>* p2 = new Lista<string>();
    p2->insertar("pasta", 1);
    p2->insertar("milanga", 2);
    p2->insertar("salmon", 3);
    Restaurante* r2 = new Restaurante("El lupo", 800, p2);

    Lista<string>* p3 = new Lista<string>();
    p3->insertar("cajita feliz", 1);
    p3->insertar("bigmac", 2);
    p3->insertar("doble cuarto", 3);
    p3->insertar("pizza", 4);
    Restaurante* r3 = new Restaurante("mc donald", 400, p3);

    Lista<Restaurante*>* restos = new Lista<Restaurante*>();
    restos->insertar(r1, 1);
    restos->insertar(r2, 2);
    restos->insertar(r3, 3);

    Lista<string>* pla = new Lista<string>();
    pla->insertar("bigmac", 1);
    pla->insertar("milanga", 2);
    pla->insertar("pizza", 3);

    Buscador_restaurantes br;
    Lista<Restaurante*>* recom = new Lista<Restaurante*>();
    recom = br.recomendar_restaurantes(restos, pla, 469);

    for(int i = 1; i<= recom->obtener_tam(); i++)
        cout << recom->obtener_dato(i)->obtener_nombre() << endl;

    delete r1;
    delete r2;
    delete r3;
    delete pla;
    delete restos;
    delete p1;
    delete p2;
    delete p3;
    delete recom;*/
    return 0;
}
