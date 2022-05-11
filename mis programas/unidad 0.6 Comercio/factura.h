#ifndef FACTURA_H_INCLUDED
#define FACTURA_H_INCLUDED
#include "fecha.h"
#include "persona.h"
#include "detalleCompra.h"

//PRE:
//POST:
//AXIOMAS:
struct eFactura;

typedef struct eFactura * Factura;

//Primitivas

//PRE:
//POST:
//AXIOMAS:
Factura crearFactura(int nro);


//PRE:
//POST:
//AXIOMAS:
void mostrarFactura(Factura f);

//PRE:
//POST:
//AXIOMAS:
void eliminarFactura(Factura f);

//gets y sets

int getNumero(Factura f);

Fecha getFecha(Factura f);

Persona getPersona(Factura f);

DetalleCompra getDetalle(Factura f);

void setNumero(Factura f, int numero);

void setFecha(Factura f, Fecha fecha);

void setPersona(Factura f, Persona p);

void setDetalle(Factura f, DetalleCompra d);





#endif // FACTURA_H_INCLUDED
