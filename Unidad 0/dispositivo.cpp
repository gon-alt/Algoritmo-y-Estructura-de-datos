#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "dispositivo.h"


struct DispositivoEstructura{

    char tipo[20];
    char marca[20];
    float precio;
    float memoria;
};

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

void mostrarDispositivo(Dispositivo d){

    printf("Tipo: %s \n", d->tipo);

    printf("Marca: %s \n", d->marca);

    printf("Memoria: %f \n", d->memoria);

    printf("Precio: %f \n", d->precio);

};
