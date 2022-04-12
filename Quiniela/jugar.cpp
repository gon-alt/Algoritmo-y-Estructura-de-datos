#include <iostream>
#include <cstring>
#include "carton.h"
#include "jugador.h"
#include "jugar.h"
#include "funciones.h"
#include <stdlib.h>
#include <time.h>


struct JugarEstructura{

	int numeros[20];

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

    	for(int i=0; i<8;i++){

            if(buscaRepetido(getJugada(j),20,getCartonJugador(ju)[i])){


                    if(buscaRepetido(getJugada(j),20,getJugada(j)[i])){

                        aciertos++;

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

            if(buscaRepetido(getJugada(j),20,getCartonJugador(ju)[i])){
                    //imprimir numeros aceratados
                printf("Numero acertado %d : %d -\n",i+1, getCartonJugador(ju)[i]);

            }else {
                //imprimir numero no acertado
                printf("Numero %d : %d \n",i+1, getCartonJugador(ju)[i]);

            }
        }
};

// getter y setter

int * getJugada (Jugar j){

    return j->numeros;

};



