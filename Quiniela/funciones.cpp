#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
#include "funciones.h"


//funciones y peocedimientos

bool buscaRepetido(int v[],int t, int aux){

	bool repetido = false;

	for(int i=0;i<t;i++){

		if(aux == v[i]){

			repetido = true;

			if(repetido==true){

                return repetido;

			}

		}

	}

	return repetido;

};


//ordenamiento de carton
int *ordenarVetor(int v[], int t){

    int aux = 0;

		for (int i=1;i<=t-1;i++){ /*pasadas*/

            for (int j=0;j<=t-2;j++){

                if (v[j] > v[j+1]) /*comparación */
                {
                    /*intercambio*/
                    aux = v[j];

                    v[j] = v[j+1];

                    v[j+1] = aux;
                }
			}
		}

	return v;
};

//guardar archivo
void guardarCarton(Jugar j, Jugador ju){

    FILE * archivo = new FILE;

    archivo = fopen("carton.txt", "w");

    fprintf(archivo, "*** Carton Ganador ***\n");

    for(int i=0; i<8;i++){

            if(buscaRepetido(getJugada(j),20,getCartonJugador(ju)[i])){
                    //imprimir numeros aceratados
                fprintf(archivo,"Numero acertado %d : %d -\n",i+1, getCartonJugador(ju)[i]);

            }else {
                //imprimir numero no acertado
                 fprintf(archivo,"Numero %d : %d \n",i+1, getCartonJugador(ju)[i]);

            }
        }

    fclose(archivo);
    free(archivo);

};
