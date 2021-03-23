#ifndef TICKET_H_INCLUDED
#define TICKET_H_INCLUDED

class Ticket {

private:
    bool condicion; // true si el ticket esta abierto, false si esta cerrado
    double importe;
    int cantidad_de_productos;

public:
    // post : el Ticket se inicializa con importe 0.
    Ticket ();

    // pre : cantidad y precio son mayores a cero . El ticket está abierto .
    // post : suma al Ticket un item a partir de la cantidad de de productos y su precio unitario .
    void agregar_item(int cantidad , double precio_unitario);

    // pre : el Ticket está abierto y no se ha aplicado un descuento previamente .
    // post : aplica un descuento sobre el total del importe .
    void aplicar_descuento(double porcentaje);

    // post : devuelve el importe acumulado hasta el momento sin cerrar el Ticket .
    double calcular_subtotal();


    // post : cierra el Ticket y devuelve el importe total .
    double calcular_total();


    // post : devuelve la cantidad total de productos .
    int contar_productos();
};


#endif // TICKET_H_INCLUDED
