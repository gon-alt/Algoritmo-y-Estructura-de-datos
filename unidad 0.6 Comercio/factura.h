#ifndef FACTURA_H_INCLUDED
#define FACTURA_H_INCLUDED

//PRE:
//POST:
//AXIOMAS:
struct eFactura;

typedef struct eFactura * Factura;

//Primitivas

//PRE:
//POST:
//AXIOMAS:
Factura crearFactura();


//PRE:
//POST:
//AXIOMAS:
void mostrarFactura(Factura f);

//PRE:
//POST:
//AXIOMAS:
void eliminarFactura(Factura f);

//gets y sets






#endif // FACTURA_H_INCLUDED
