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

int getNroDetalle(DetalleCompra d);

int getDetalleCantidad(DetalleCompra d);

float GetTotalDetalle(DetalleCompra d);

void SetNroDetalle(DetalleCompra d, int nroDetalle);

void SetDetalleCantidad(DetalleCompra d, int Cantidad);

void SetDetalleCantidad(DetalleCompra d, int cantidad);



#endif // DETALLECOMPRA_H_INCLUDED
