#include <iostream>
#include "listaGenerica.h"

#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
    printf("------- LISTAS VOID --------\n");


    Lista listaEnteros = crearLista(sizeof(char));

    char x = 'h';
    insertarInicio(listaEnteros, &x);
    x = 'i';
    insertarFinal(listaEnteros, &x);
    x = 'K';
    insertarInicio(listaEnteros, &x);
    x = 'g';
    insertar(listaEnteros,&x, 2);

    ///11  10  -103  23


    mostrarLista(listaEnteros);
}
