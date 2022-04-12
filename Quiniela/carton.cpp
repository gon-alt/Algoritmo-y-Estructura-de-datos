#include <iostream>
#include <cstring>
#include "carton.h"
#include "funciones.h"
#include <stdlib.h>
#include <time.h>



//Definicion estructura carton
struct CartonEstructura{

	int numeros[8];

};

Carton crearCartonTeclado(){

	Carton c = new CartonEstructura;


    for(int i=0; i<8; i++){

            c->numeros[i] = -1 - i;

    }

    int aux;
	int i = 0;

	while (i<8){

		printf("Elija un numero del 0 al 99 para la posicion %d\n",i+1);

		scanf("%d",&aux);

		if(buscaRepetido(c->numeros, 8, aux) || (aux>99) || (aux<0)){

			printf("El numero no corresponde o esta repetido\n");

		}else{

			c->numeros[i] = aux;

			i++;

		}

	}

        ordenarVetor(c->numeros, 8);

};

Carton crearCarton(){

	srand(time(NULL));

	int aux;

	Carton c = new CartonEstructura;

		//Carga de carraton generico

	for(int i=0;i<8;i++){

		c->numeros[i] = 1 + rand() % (100 - 0);

        }

	for(int i=0;i<8;i++){

		if(buscaRepetido(c->numeros, 8, c->numeros[i])){

				c->numeros[i] = 1 + rand() % (100 - 0);

			}

	}

	ordenarVetor(c->numeros, 8);
}

void mostrarCarton(Carton c){

	printf("**** Carton ****\n");

	for(int i=0; i<8;i++){

		printf("Numero %d : %d -\n",i+1, c->numeros[i]);

	}
};


//get y set

int * getCarton(Carton c){

    return c->numeros;

};
