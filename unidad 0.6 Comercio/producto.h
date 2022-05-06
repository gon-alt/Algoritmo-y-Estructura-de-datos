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
Producto crearProducto( char nombre[20],float precio,int codigo, int cantDisponible);


//PRE:
//POST:
//AXIOMAS:
void mostratProducto(Producto p);


//PRE:
//POST:
//AXIOMAS:
void eliminarProducto(Producto p);

//PRE:
//POST:
//AXIOMAS:
Producto buscarProducto(int codigo);

//gets y sets

char * getNombreProducto(Producto p);

float getPrecio(Producto p);

int getCodigo(Producto p);

int getCantDisponible(Producto p);

void setNombreProducto(Producto p, char nombre);

void setPrecio(Producto p, float precio);

void setCodigo(Producto p, int codigo);

void setCantDisponible(Producto p, int cantDisponible);




#endif // PRODUCTOS_H_INCLUDED
