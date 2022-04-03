#include <iostream>
#include <cstring>
#include "jugador.h"
#include "carton.h"

struct JugadorEstructura{

	char nombre[20];
	int dni;
	Carton c;

};

Jugador crearJugador(){

	Jugador j = new JugadorEstructura;
	int n;

	printf("Ingrese el nombre del Jugador\n");
	scanf("%s",j->nombre);

	printf("Ingrese el DNI del jugador\n");
	scanf("%d",&j->dni);

	printf("Ingrese 1 si quiere generar los numeros de forma aleatorea o 2 para elegir sus numeros\n");
	scanf("%d",&n);

	while ((n!=1) & (n!=2)){
		printf("Numero incorrecto\n");
		printf("Ingrese 1 si quiere  generar los numeros de forma aleatorea o 2 para elegir sus numeros\n");
		scanf("%d",&n);
	}

	switch(n){

		case 2: j->c = crearCartonTeclado();

		break;

		case 1: j->c = crearCarton();

		break;

        }

	return j;

};

void mostrarJugador(Jugador j){

	printf("**** Jugador ****\n");
	printf("Nombre: %s\n",j->nombre);
	printf("DNI: %d\n",j->dni);

	mostrarCarton(j->c);

};
