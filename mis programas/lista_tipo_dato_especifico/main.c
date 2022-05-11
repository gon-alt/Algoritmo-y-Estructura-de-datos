#include <stdio.h>
#include <stdlib.h>

#include "lista.h"

int main()
{
    printf("--------------Lista simplemente enlazada-------\n");

    ListaEnc lista = crearLista();

    printf("\nEsta vacia: %d\n", estaVacia(lista));


    insertarInicio(lista, 3);
    insertarInicio(lista, 7);
    insertarInicio(lista, 4);
    insertarInicio(lista, 2);
    insertarInicio(lista, 19);
    //insertar(lista, -1,1);
    //insertarFin(lista, -4);
    //insertarInicio(lista, 7);
    //insertar(lista, 3,4);
    //insertarFin(lista, 32);

    imprimir(lista);

    ordenarLista(lista);

    imprimir(lista);

    int pos;
    int error;

    error = buscarEnLista(lista, &pos, 3);

    printf(" esta en la lisa? : %d \n", error);

    printf("esta en la posicion: %d \n", pos);


    int resultado;

    obtenerElemento(lista, &resultado, 3);
    printf("\nResultado obtenido: %d\n", resultado);
    imprimir(lista);

    //removerFin(lista, &resultado);
    // printf("\nResultado obtenido: %d\n", resultado);
    //imprimir(lista);

    //removerInicio(lista, &resultado);
    //printf("\nResultado obtenido: %d\n", resultado);
    //imprimir(lista);

    //remover(lista, &resultado, 2);
    //printf("\nResultado obtenido: %d\n", resultado);
    //imprimir(lista);

    obtenerTamanio(lista, &resultado);
    printf("\nResultado obtenido: %d\n", resultado);

    //Libero memoria y vacio la lista
    //liberarLista(lista);
    //printf("\nEsta vacia: %d\n", estaVacia(lista));



    return 0;
}
