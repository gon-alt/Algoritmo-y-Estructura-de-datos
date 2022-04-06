#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "dispositivo.h"

//Primitivas

//PRE:
//POST:
//AXIOMAS:

struct DispositivoEstructura{

    char tipo[20];
    char marca[20];
    float precio;
    float memoria;
};

//PRE:
//POST:
//AXIOMAS:

Dispositivo crearDispositivo(){

    Dispositivo d = new DispositivoEstructura;

    printf("Ingrese el tipo de Dispositivo\n");

    scanf("%s", d->tipo);

    printf("Ingrese el marca de Dispositivo\n");

    scanf("%s", d->marca);

    printf("Ingresae la capacidad de memoria del dispositivo\n");

    scanf("%f",&d->memoria);

    printf("Ingrese el precio del dispositivo\n");

    scanf("%f",&d->precio);

    return d;
};

//PRE:
//POST:
//AXIOMAS:

void destruirDispositivo(Dispositivo d){

    delete d;

};

//PRE:
//POST:
//AXIOMAS:

void mostrarDispositivo(Dispositivo d){

    printf("Tipo: %s \n", d->tipo);

    printf("Marca: %s \n", d->marca);

    printf("Memoria: %f \n", d->memoria);

    printf("Precio: %f \n", d->precio);

};

//gets & sets

//PRE:
//POST:
//AXIOMAS:

char * getTipoDispositivo(Dispositivo d){

    return d->tipo;

};

//PRE:
//POST:
//AXIOMAS:

char * getMarcaDispositivo(Dispositivo d){

    return d->marca;

};

//PRE:
//POST:
//AXIOMAS:

float getPrecioDispositivo(Dispositivo d){

    return d->precio;

};

//PRE:
//POST:
//AXIOMAS:

float getMemoriaDispositivo(Dispositivo d){

    return d->memoria;

};

//PRE:
//POST:
//AXIOMAS:

void setTipoDispositivo(Dispositivo d, char tipo[20]){

    d->tipo = tipo;

};

//PRE:
//POST:
//AXIOMAS:

void setMarcaDispositivo(Dispositivo d, char marca[20]){

    d->marca = marca;

};

//PRE:
//POST:
//AXIOMAS:

void setPrecioDispositivo(Dispositivo d, float precio){

    d->precio = precio;

};

//PRE:
//POST:
//AXIOMAS:

void setMemoriaDispositivo(Dispositivo d, float memoria){

    d->memoria = memoria;

};
