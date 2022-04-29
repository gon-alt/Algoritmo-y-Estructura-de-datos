#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "producto.h"


//PRE:
//POST:
//AXIOMAS:
struct eProducto{

    char nombre[20];
    float precio;
    int codigo;
    int cantDisponible;
};

//PRE:
//POST:
//AXIOMAS:
Producto crearProducto(){

    Producto p = new eProducto;

    //to... leer archivo y cargarlo en la estructura

    return p;

};

//PRE:
//POST:
//AXIOMAS:
void mostratProducto(Producto p){

    printf("*** Producto ***\n");

    printf("Codigo: %d\n",p->codigo);
    printf("Nombre: %s\n",p->nombre);
    printf("Precio: %F\n",p->precio);
    printf("En stock: %d\n",p->cantDisponible);

};

//PRE:
//POST:
//AXIOMAS:
void eliminarProducto(Producto p){

    delete p;
};

//gets y sets

char * getNombreProducto(Producto p){

        return p->nombre;

};

float getPrecio(Producto p){

    return p->precio;

};

int getCodigo(Producto p){

    return p->codigo;

};

int getCantDisponible(Producto p){

    return p->cantDisponible;

};

void setNombreProducto(Producto p, char nombre[]){

    strcpy(p->nombre, nombre);

};

void setPrecio(Producto p, float precio){

    p->precio = precio;

};

void setCodigo(Producto p, int codigo){

    p->codigo = codigo;

};

void setCantDisponible(Producto p, int cantDisponible){

    p->cantDisponible = cantDisponible;

};
