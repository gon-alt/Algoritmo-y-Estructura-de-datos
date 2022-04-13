#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "empleados.h"
#include "persona.h"

//Primitivas

//PRE:
//POST:
//AXIOMAS:

struct EmpleadoEstructura{

    Persona p;
    int legajo;
    float sueldo;
    char empresa[20];

};

//PRE:
//POST:
//AXIOMAS:

Empleado crearEmpleado(){

    Empleado e = new EmpleadoEstructura;

    e->p = crearPersona();
    printf("Ingrese el numero de legajo\n");
    scanf("%d",&e->legajo);
    printf("Ingrese el Sueldo\n");
    scanf("%f",&e->sueldo);
    printf("Ingrese el nombre de la Empresa\n");
    scanf("%s",&e->empresa);

    return e;

};


//PRE:
//POST:
//AXIOMAS:

void mostrarEmpleado(Empleado e){

    mostrarPersona(e->p);

    printf("*** Empleado: ***\n");

    printf("Legajo: %d\n",e->legajo);
    printf("Sueldo: %f\n",e->sueldo);
    printf("Empresa: %s\n",e->empresa);

};

//PRE:
//POST:
//AXIOMAS:

void eliminarEmpleado(Empleado e){

    delete e;

};

//gets & sets

//PRE:
//POST:
//AXIOMAS:

int getLegajo(Empleado e){

    return e->legajo;
};

//PRE:
//POST:
//AXIOMAS:
float getSueldo(Empleado e){

    return e->sueldo;

};

//PRE:
//POST:
//AXIOMAS:
char *getEmpresa(Empleado e){

    return e->empresa;

};

//PRE:
//POST:
//AXIOMAS:
void setLegajo(Empleado e, int legajo){

    e->legajo = legajo;

};

//PRE:
//POST:
//AXIOMAS:
void setSueldo(Empleado e,float sueldo){

    e->sueldo = sueldo;

};

//PRE:
//POST:
//AXIOMAS:
void setEmpresa(Empleado e, char empresa[20]){

   strcpy(e->empresa, empresa);

};
