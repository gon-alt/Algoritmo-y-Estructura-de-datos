#include <iostream>
#include <cstring>
#include "carton.h"
#include <stdlib.h>
#include <time.h>



//Definicion estructura carton
struct CartonEstructura{

	int numeros[8];

};

//funciones y peocedimientos

bool buscaRepetido(Carton c, int aux){

	bool repetido=false;

	for(int i=0;i<8;i++){

		if(aux==c->numeros[i]){

			repetido = true;

			return repetido;

		}

	}

	return repetido;

};

Carton crearCartonTeclado(){

	Carton c = new CartonEstructura;

	int aux;
	int i = 0;

	for(int p=0;p<8;p++){

		c->numeros[p] = -10 ;

	}

	while (i<8){

		printf("Elija un numero del 0 al 99 para la posicion %d\n",i+1);

		scanf("%d",&aux);

		if(buscaRepetido(c, aux) || (aux>99) || (aux<0)){

			printf("El numero no corresponde o esta repetido\n");

		}else{

			c->numeros[i] = aux;

			i++;

		}

	}

		//ordenamiento de carton

		for (int i=1;i<=8-1;i++){ /*pasadas*/

            for (int j=0;j<=8-2;j++){

                if (c->numeros[j]>c->numeros[j+1]) /*comparación */
                {
                    /*intercambio*/
                    aux=c->numeros[j];
                    c->numeros[j] = c->numeros[j+1];
                    c->numeros[j+1] = aux;
                }
			}
		}

	return c;
};

Carton crearCarton(){

	srand(time(NULL));

	int aux;

	Carton c = new CartonEstructura;

	for(int i=0;i<8;i++){

		c->numeros[i] = 1 + rand() % (100 - 0);

			if(aux == c->numeros[i]){

				aux = 1 + rand() % (100 - 0);

			} else {

				aux = 1 + rand() % (100 - 0);

				c->numeros[i] = aux;

			}

	}

	//ordenamiento de carton

		for (int i=1;i<=8-1;i++){ /*pasadas*/

            for (int j=0;j<=8-2;j++){

                if (c->numeros[j]>c->numeros[j+1]) /*comparación */
                {
                    /*intercambio*/
                    aux=c->numeros[j];

                    c->numeros[j] = c->numeros[j+1];

                    c->numeros[j+1] = aux;
                }
			}
		}

	return c;
};

void mostrarCarton(Carton c){

	printf("**** Carton ****\n");

	for(int i=0; i<8;i++){

		printf("Numero %d : %d -\n",i+1, c->numeros[i]);

	}
};
