#include <iostream>
#include <cstring>
#include "carton.h"
#include "jugador.h"
#include "jugar.h"
#include <stdlib.h>
#include <time.h>


struct JugarEstructura{

	int numeros[20];

};

bool buscaRepetido(Jugar j, int aux){

	bool repetido = false;

	for(int i=0;i<20;i++){

		if(aux==j->numeros[i]){

			repetido = true;

			return repetido;

		}

	}

	return repetido;

};

Jugar crearJuego(){

	srand(time(NULL));

	int aux;
	int i = 0;
	Jugar j = new JugarEstructura;

	for(int p=0;p<20;p++){

		j->numeros[p] = -1;

	}

	while (i<20){

		aux = 1 + rand() % (100 - 0);

			if(buscaRepetido(j, aux)){

				printf("el numero esta repetido %d\n",i);

			}else{

				j->numeros[i] = aux;

				i++;
			}

	}

		//ordenamiento de carton

		for (int i=1;i<=20-1;i++){ /*pasadas*/

            for (int h=0;h<=20-2;h++){

                if (j->numeros[h]>j->numeros[h+1]) /*comparación */
                {
                    /*intercambio*/
                    aux = j->numeros[h];

                    j->numeros[h] = j->numeros[h+1];

                    j->numeros[h+1] = aux;
                }
			}
		}

	return j;

};

void mostrarJugada(Jugar j){

	printf("**** Jugada ****\n");

	for(int i=0; i<20;i++){

		printf("Numero %d : %d -\n",i+1, j->numeros[i]);

	}

};


int comprobarGanador(Jugar j, Jugador ju){

    int aciertos = 0;

    for(int i=0;i<20;i++){

        for(int k=0;k<8;k++){

            if(j->numeros[i] == 0 /*ju->c->numeros[k]*/){

                aciertos++;
            }
        }

    }

return aciertos;

};



