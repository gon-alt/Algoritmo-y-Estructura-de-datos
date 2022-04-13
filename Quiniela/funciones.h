#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include "carton.h"
#include "jugador.h"
#include "jugar.h"

//Buscar si un numero esta repetido en un array
bool buscaRepetido(int v[],int t, int aux);

//ordenar vector
int *ordenarVetor(int v[], int t);

//Comparacion de array

//guardar archivo
void guardarCarton(Jugar j, Jugador ju);


#endif // FUNCIONES_H_INCLUDED
