#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "detalleCompra.h"


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

//PRE:
//POST:
//AXIOMAS:
DetalleCompra crearDetalle();

//PRE:
//POST:
//AXIOMAS:
void mostrarDetalle(DetalleCompra d);

//PRE:
//POST:
//AXIOMAS:
void eliminarDetalle(DetalleCompra d);

//gets y sets
