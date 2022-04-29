#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "detalleCompra.h"
#include "producto.h"


//PRE:
//POST:
//AXIOMAS:
struct eDetalleCompra{

    int nroDetalle;
    Producto p;
    int cantidad;
    float precio;
    float precioTotal;

};

void cargarNumero(DetalleCompra d){

    d->nroDetalle++;

};

//PRE:
//POST:
//AXIOMAS:
DetalleCompra crearDetalle(){

    DetalleCompra d = new eDetalleCompra;
    d->nroDetalle = 1;//cargarNumero(d); ver si se puede implementar el metodo cargarNumero
    d->p = crearProducto();//if si es un producto nuevo o si ya esta creado
    printf("Ingrese la cantidad: \n");
    scanf("%d",&d->cantidad);
    d->precio = getPrecio(d->p);
    d->precioTotal = d->precio*  d->cantidad;


    return d;

};

//PRE:
//POST:
//AXIOMAS:
void mostrarDetalle(DetalleCompra d){

     printf("*** Detalle de compra ***\n");

    for(int i=0;i<5;i++){
//incluir el numero del array para recorrer el for

    printf("Numero de Detalle: %d\n", d->nroDetalle);
    printf("Producto: %s - Cantidad: %d - Precio %f - Total\n", getNombreProducto(d->p), d->cantidad, getPrecio(d->p), d->precioTotal);

    }



};

//PRE:
//POST:
//AXIOMAS:
void eliminarDetalle(DetalleCompra d){

    delete d;

};

//gets y sets
//TODO terminar la implementacion de sets y gets
int getNroDetalle(DetalleCompra d);

Producto getProducto(Producto p);

int getDetalleCantidad(DetalleCompra d);

float GetTotalDetalle(DetalleCompra d);

void SetNroDetalle(DetalleCompra d, int nroDetalle);

void SetDetalleCantidad(DetalleCompra d, int Cantidad);

void SetDetalleCantidad(DetalleCompra d, int cantidad);

