#ifndef FECHAS_H_INCLUDED
#define FECHAS_H_INCLUDED

//Primitivas


//PRE:
//POST:
//AXIOMAS:
struct EstructuraFecha;

typedef struct EstructuraFecha * Fecha;

//PRE:
//POST:
//AXIOMAS:
Fecha crearFecha(int d, int m, int a);

//PRE:
//POST:
//AXIOMAS:
void mostrarFecha(Fecha f);

//PRE:
//POST:
//AXIOMAS:

void destruirFecha(Fecha f);

//gets

//PRE:
//POST:
//AXIOMAS:
int getMes(Fecha f);

//PRE:
//POST:
//AXIOMAS:
int getDia(Fecha f);

//PRE:
//POST:
//AXIOMAS:
int getAnio(Fecha f);

//Sets
//PRE:
//POST:
//AXIOMAS:

void setDia(Fecha f, int dia);

//PRE:
//POST:
//AXIOMAS:
void setMes(Fecha f, int mes);

//PRE:
//POST:
//AXIOMAS:
void setAnio(Fecha f, int anio);


#endif // FECHAS_H_INCLUDED
