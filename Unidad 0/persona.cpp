#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "persona.h"
#include "dispositivo.h"

struct PersonaEstructura{

    char nombre[20];
    int dni;
    Dispositivo d;

};

Persona crearPersona(){

    Persona p = new PersonaEstructura;

    printf("Ingrese el nombre de la persona\n");
    scanf("%s",& p->nombre);
    printf("Ingrese el DNI de la persona\n");
    scanf("%d",& p->dni);
    p->d = crearDispositivo();

    return p;

};

void mostrarPersona(Persona p){

    printf("*** Persona ***\n");

    printf("Nombre: %s\n", p->nombre);
    printf("DNI: %d \n", p->dni);
    mostrarDispositivo(p->d);

};
