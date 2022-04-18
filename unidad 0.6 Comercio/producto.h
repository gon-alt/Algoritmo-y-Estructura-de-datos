#ifndef PRODUCTOS_H_INCLUDED
#define PRODUCTOS_H_INCLUDED


//PRE:
//POST:
//AXIOMAS:
struct eProducto;

typedef struct eProducto * Producto;


//PRE:
//POST:
//AXIOMAS:
Producto crearProducto();


//PRE:
//POST:
//AXIOMAS:
void mostratProducto(Producto p);


//PRE:
//POST:
//AXIOMAS:
void eliminarProducto(Producto p);

//gets y sets

char * getNombre(Producto p);

float getPrecio(Producto p);

int getCodigo(Producto p);

int getCantDisponible(Producto p);

void setNombre(Producto p, char nombre);

void setPrecio(Producto p, float precio);

void setCodigo(Producto p, int codigo);

void setCantDisponible(Producto p, int cantDisponible);




#endif // PRODUCTOS_H_INCLUDED
