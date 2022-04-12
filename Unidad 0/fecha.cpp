#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "fechas.h"

struct EstructuraFecha{

    int anio;
    int mes;
    int dia;

};

Fecha crearFecha(int d, int m, int a){

    Fecha f = new EstructuraFecha;

    f->anio = a;

    f->mes = m;

    f->dia = d;

    return f;

};

void mostrarFecha(Fecha f){

    printf("Fecha: ");

    printf("%d / %d / %d\n", f->dia, f->mes, f->anio);

};

void destruirFecha(Fecha f){

    delete f;
};

int getMes(Fecha f){

    return f->mes;

};

int getDia(Fecha f){

    return f->dia;

};

int getAnio(Fecha f){

    return f->anio;

};

void setDia(Fecha f, int dia){

    f->dia = dia;

};

void setMes(Fecha f, int mes){

    f->mes = mes;

};

void setAnio(Fecha f, int anio){

    f->anio = anio;

};
