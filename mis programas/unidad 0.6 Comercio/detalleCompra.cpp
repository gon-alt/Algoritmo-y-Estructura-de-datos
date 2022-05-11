#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "detalleCompra.h"
#include "producto.h"
#include "listaGenerica.h"


//PRE:
//POST:
//AXIOMAS:
struct eDetalleCompra{

    int nroDetalle;
    char nombreProducto[20];
    int cantidad;
    float precio;
    float precioTotal;
    float totalFactura;

};

void cargarNumero(DetalleCompra d){

    d->nroDetalle++;

};

//PRE: debe recibir una lista de productos para poder buscar en la misma el producto segun codigo y su precio y cantidad
//POST: retorna una detalle de la factura segun producto precio y cantidad
//AXIOMAS:
DetalleCompra crearDetalle(Lista listaProductos){

    DetalleCompra d = new eDetalleCompra;
    Producto producto;

    int codigo;
    int cantidad;
    int pos;

    d->nroDetalle = 1;//cargarNumero(d); ver si se puede implementar el metodo cargarNumero
    printf("Ingrese el codigo del producto: \n");
    scanf("%d", &codigo);
    //en el caso de implementar una lista
    buscarEnLista(listaProductos, &pos, codigo);
    //d->nombreProducto = getNombreProducto(producto);
    printf("Ingrese la cantidad: \n");
    scanf("%d",&cantidad);
    d->cantidad = cantidad;
    d->precio = getPrecio(producto);
    d->precioTotal = d->precio*  d->cantidad;
    d->totalFactura; // ver si total va aca o se saca en la factura

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
    printf("Producto: %s - Cantidad: %d - Precio %f - Total %f\n",d->nombreProducto, d->cantidad, d->precio, d->precioTotal);//##agregar total del detalle y de factura

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

