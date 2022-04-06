#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "persona.h"
#include "dispositivo.h"

//Primitivas

//PRE:
//POST:
//AXIOMAS:

struct PersonaEstructura{

    char nombre[20];
    int dni;
    Dispositivo d;

};

//PRE:
//POST:
//AXIOMAS:

Persona crearPersona(){

    Persona p = new PersonaEstructura;

    printf("Ingrese el nombre de la persona\n");
    scanf("%s",& p->nombre);
    printf("Ingrese el DNI de la persona\n");
    scanf("%d",& p->dni);
    p->d = crearDispositivo();

    return p;

};

//PRE:
//POST:
//AXIOMAS:

void eliminarPersona(Persona p){

    delete p;

};

//PRE:
//POST:
//AXIOMAS:

void mostrarPersona(Persona p){

    printf("*** Persona ***\n");

    printf("Nombre: %s\n", p->nombre);
    printf("DNI: %d \n", p->dni);
    mostrarDispositivo(p->d);
};

//gets & sets

//PRE:
//POST:
//AXIOMAS:

char * getNombre(Persona p){

    return p->nombre;

};

//PRE:
//POST:
//AXIOMAS:

int getDniPersona(Persona p){

    return p->dni;

};

//PRE:
//POST:
//AXIOMAS:

void setNombrePersona(Persona p, char nombre[20]){

    p->nombre = nombre;

};

//PRE:
//POST:
//AXIOMAS:

void setDniPersona(Persona p, int dni){

    p->dni = dni;

};
