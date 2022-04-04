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

		j->numeros[i] = 1 + rand() % (100 - 0);

				i++;

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


int contarAciertos(Jugar j, Jugador ju){

    int aciertos = 0;
    int i = 0;

    while(i<8){

        for(int k=0;k<20;k++){

            if(j->numeros[k] == getCartonJugador(ju)[i]){

                aciertos++;
                i++;
            }
        }

    }

return aciertos;

};

void comprobarGanador(Jugar j, Jugador ju){

    int aciertos = contarAciertos(j,ju);

    if(aciertos >= 8){

        printf("Gano $ 11 millones!!\n");

    } else if(aciertos == 7){

        printf("Gano $ 20 mil\n");

    }else if(aciertos == 6){

        printf("Gano $ 500\n");

    }else if(aciertos == 5){

        printf("Gano $ 50\n");

    }else if( aciertos < 5){

        printf("No ganaste nada!!\n");

    }


};

void mostrarCartonGanador(Jugar j, Jugador ju){

    int a[8];

    printf("*** Carton Ganador ***\n");

	for(int i=0; i<8;i++){

            for( int k=0; k<20; k++){

                if(getCartonJugador(ju)[i] == j->numeros[k])

                printf("Numero acertado %d : %d -\n",i+1, getCartonJugador(ju)[i]);

            }

	}

};

// getter y setter

int * getJugada (Jugar j){

    return j->numeros;

};



