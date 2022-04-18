#ifndef DETALLECOMPRA_H_INCLUDED
#define DETALLECOMPRA_H_INCLUDED

//PRE:
//POST:
//AXIOMAS:
struct eDetalleCompra;

typedef struct eDetalleCompra * DetalleCompra;

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


#endif // DETALLECOMPRA_H_INCLUDED
