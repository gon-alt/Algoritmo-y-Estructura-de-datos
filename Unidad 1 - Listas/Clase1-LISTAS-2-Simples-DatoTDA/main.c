#include <stdio.h>
#include <stdlib.h>
#include "animal.h"
#include "dato.h"
#include "lista.h"

int main()
{
    printf("--------------Lista simplemente enlazada - Puntero a un Dato-------\n");

    Animal animal1 = crearAnimal("Perro", "Caniche", "Samanta", 22.3, 2, 'm');
    Animal animal2 = crearAnimal("Perro", "Dogo", "Ishikame", 31.1, 5, 'm');
    Animal animal3 = crearAnimal("Gato", "Siames", "Robertina", 8.3, 3, 'f');


    Dato d = crearDato();

    ListaEnc lista = crearLista();

    d->animal = animal1;
    insertarInicio(lista, d );

    d->animal = animal2;
    insertarInicio(lista, d );

    d->animal = animal3;
    insertarFin(lista, d );



    imprimir(lista);



    return 0;
}
