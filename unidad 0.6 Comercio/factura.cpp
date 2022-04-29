#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "factura.h"
#include "fecha.h"
#include "persona.h"
#include "detalleCompra.h"

//PRE:
//POST:
//AXIOMAS:
struct eFactura{

    int numero;
    Fecha f;
    Persona p;
    DetalleCompra d[];

};

//Primitivas

//PRE: la factura debe estar inicializada
//POST: se retorna una factura con sus datos guardados en memoria
//AXIOMAS: los numeros de factura se incrementa cada vez que se utiliza la funcion
Factura crearFactura(int nro){

    Factura f = new eFactura;
    int i=0;//ver q poner como nro de detalle
    //crear en la estructura un numero inicializado en 1 y que sume y se guarde su valor al iniciar factura

    f->f = crearFecha(1,1,2000);
    f->p = crearPersona();
    f->d[i] = crearDetalle();
    nro++;
    f->numero = nro;

    return f;

};

//PRE:
//POST:
//AXIOMAS:
void mostrarFactura(Factura f){

    printf("*** Factura Numero: %d *** ", f->numero);
    mostrarFecha(f->f);
    mostrarPersona(f->p);
//    mostrarDetalle(f->d);

};

//PRE:
//POST:
//AXIOMAS:
void eliminarFactura(Factura f){

    delete f;

};

//gets y sets

int getNumero(Factura f){

    return f->numero;

};

Fecha getFecha(Factura f){

    return f->f;

};

Persona getPersona(Factura f){

    return f->p;

};

DetalleCompra getDetalle(Factura f){

//    return f->d;

};

void setNumero(Factura f, int numero){

    f->numero = numero;

};

void setFecha(Factura f, Fecha fecha){

    f->f = fecha;

};

void setPersona(Factura f, Persona p){

    f->p = p;

};

void setDetalle(Factura f, DetalleCompra d){

//    f->d = d;

};



