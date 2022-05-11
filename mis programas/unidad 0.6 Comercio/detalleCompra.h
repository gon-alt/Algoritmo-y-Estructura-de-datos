#ifndef DETALLECOMPRA_H_INCLUDED
#define DETALLECOMPRA_H_INCLUDED
#include "listaGenerica.h"

//PRE:
//POST:
//AXIOMAS:
struct eDetalleCompra;

typedef struct eDetalleCompra * DetalleCompra;

//PRE: debe recibir una lista de productos para poder buscar en la misma el producto segun codigo y su precio y cantidad
//POST: retorna una detalle de la factura segun producto precio y cantidad
//AXIOMAS:
DetalleCompra crearDetalle(Lista listaProductos);

//PRE:
//POST:
//AXIOMAS:
void mostrarDetalle(DetalleCompra d);

//PRE:
//POST:
//AXIOMAS:
void eliminarDetalle(DetalleCompra d);

//gets y sets

int getNroDetalle(DetalleCompra d);

int getDetalleCantidad(DetalleCompra d);

float GetTotalDetalle(DetalleCompra d);

void SetNroDetalle(DetalleCompra d, int nroDetalle);

void SetDetalleCantidad(DetalleCompra d, int Cantidad);

void SetDetalleCantidad(DetalleCompra d, int cantidad);



#endif // DETALLECOMPRA_H_INCLUDED
