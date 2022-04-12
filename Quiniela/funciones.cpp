#include <iostream>
#include <cstring>
#include "funciones.h"


//funciones y peocedimientos

bool buscaRepetido(int v[],int t, int aux){

	bool repetido = false;

	for(int i=0;i<t;i++){

		if(aux == v[i]){

			repetido = true;

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
