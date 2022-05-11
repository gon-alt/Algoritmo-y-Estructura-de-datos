#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "persona.h"
#include "fecha.h"

//Primitivas

//PRE:
//POST:
//AXIOMAS:

struct PersonaEstructura{

    char nombre[20];
    int dni;
    //Fecha fechaN;
    //Dispositivo d[2];

};

//PRE:
//POST:
//AXIOMAS:

Persona crearPersona(char nombre[], int dni){

    Persona p = new PersonaEstructura;

    strcpy(p->nombre, nombre);
    p->dni = dni;

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

    strcpy(p->nombre, nombre);

};

//PRE:
//POST:
//AXIOMAS:

void setDniPersona(Persona p, int dni){

    p->dni = dni;

};
