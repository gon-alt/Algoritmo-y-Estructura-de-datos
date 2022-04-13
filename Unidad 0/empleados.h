#ifndef EMPLEADOS_H_INCLUDED
#define EMPLEADOS_H_INCLUDED

//Primitivas

//PRE:
//POST:
//AXIOMAS:

struct EmpleadoEstructura;

typedef struct EmpleadoEstructura * Empleado;


//PRE:
//POST:
//AXIOMAS:

Empleado crearEmpleado();


//PRE:
//POST:
//AXIOMAS:

void mostrarEmpleado(Empleado e);

//PRE:
//POST:
//AXIOMAS:

void eliminarEmpleado(Empleado e);

//gets & sets

//PRE:
//POST:
//AXIOMAS:

int getLegajo(Empleado e);

//PRE:
//POST:
//AXIOMAS:
float getSueldo(Empleado e);

//PRE:
//POST:
//AXIOMAS:
char *getEmpresa(Empleado e);

//PRE:
//POST:
//AXIOMAS:
void setLegajo(Empleado e, int legajo);

//PRE:
//POST:
//AXIOMAS:
void setSueldo(Empleado e,float sueldo);

//PRE:
//POST:
//AXIOMAS:
void setEmpresa(Empleado e, char empresa[20]);

#endif // EMPLEADOS_H_INCLUDED
