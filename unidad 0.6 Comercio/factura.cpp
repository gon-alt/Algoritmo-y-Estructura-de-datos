#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "factura.h"
#include "fechas.h"
#include "persona.h"

//PRE:
//POST:
//AXIOMAS:
struct eFactura{

    int numero;
    Fecha f;
    Persona p;


};

//Primitivas

//PRE: la factura debe estar inicializada
//POST: se retorna una factura con sus datos guardados en memoria
//AXIOMAS: los numeros de factura se incrementa cada vez que se utiliza la funcion
Factura crearFactura(){

    Factura f = new eFactura;

    int i=1;



    i++;

    return f;

};

//PRE:
//POST:
//AXIOMAS:
void mostrarFactura(Factura f);

//PRE:
//POST:
//AXIOMAS:
void eliminarFactura(Factura f);

//gets y sets

