#include <stdio.h>
#include <stdlib.h>
#include "listas.h"



struct NodoE{
// se declara el nodo quien tiene el dato y un puntero al soguiente nodo
    int  item; //
    No prox; //es un puntero

};



struct ListaEncE{
// se declara la lista que tiene el tamaño de la lista que se incrementa
// cada vez que se crea un nodo nuevo
    int tam;
    No inicio;// tambien tiene un puntero al primer nodo de la lista, apartoir de el podemos recorrer la lista

};

// la funcion crear lista solo crea la lista y la inicializa en null
// es el constructor de la lista, primitiva!
ListaEnc crearLista(){

    ListaEnc lista = malloc(sizeof(struct ListaEncE));//reserva memoria para una lista

    lista->tam = 0;// el tamaño de la lista comienza en cero y se incrementa al insetar un nodo en la lista
    lista->inicio = NULL;// si la lista apunta a null esta vacia

    return lista;// retornamos la lista

};

// crearNo es la primitiva mas importante que crea el nodo, se la llama constructor
No crearNo(int item,No prox){// recibe por parametro el dato a guardar en la lista
                            //y un puntero al siguiente nodo
    // reservamos memoria para el nodo
    No nodo = malloc(sizeof(struct NodoE));
    //se gurada el item y el puntero al siguiente nodo para poder leer la lista
    nodo ->item = item;
    nodo ->prox = prox;

    return nodo;

};

//Insertar (pos- ini- fin)
int insertarInicio(ListaEnc lista, int item){

        //verifiquen algo en particular-- null?

        //se declara un nodo y se le da valor con la funcion crearNodo
        //toma el valor del dato que queremos guardar y recibe una lista para tomar la direccion del primer nodo
        // o si la lista esta vacia apuntar a null para saber que es el final de la lista
        No nuevoNo = crearNo(item, lista->inicio);
        //el inicio de la lista ahora apunta al nuevo nodo por que estamos insertando al inicio
        lista-> inicio = nuevoNo;
        //el tamaño de la lista aumenta en uno por que sumamos un dato a la misma
        lista -> tam++;

        return 1;// se retorna 1 como si fuera un true para saber que se inserto correctamente el dato
};

//eliminar al inicio de la lista
int removerInicio(ListaEnc lista, int * item){

    //chequear NULL

    if ( estaVacia(lista)){

        return -1;
    }

    //guardamos la direccion de memoria del dato que esta al principio de la lista por que estamos eliminado al principio
    No aux = lista->inicio;

    ///if <---------------
    //guardamos la direccion en el parematro pasado por referencia
    *item = aux->item;

    free(aux);// libreamos la  memoria
    aux = NULL;//apuntamos aux a null para que no retrne basura o la direccion de memoria que ya no esta reservada

    // disminuimos el tamaño de la lista por que tenemos un elemento menos
    lista->tam--;

    return 1;// retornamos 1 como un true

};

// verificamos si la lista esta vacia
int estaVacia(ListaEnc lista){

    //verificar algunas cosas ?¡?¡

    if (lista->inicio == NULL){

        return TRUE;
    }

    return FALSE;
};


int obtenerElemento(ListaEnc lista, int* item, int pos) {

    //si la lista esta vacia retorna codigo de error
    if (estaVacia(lista)){
        return -1;}
    //si la posicion no corresponde dentro del tamaño de la lista retorna error
    if (pos < 0 || pos >= lista->tam){
            //por que el valor del item es -1???
        *item = -1;
        return -1;
    }
    // si item es null es por que no hay elemento para obtener, retorna error
    if (item == NULL){
        return -1;}

    //se declara un puntero del tipo nodo
    No  aux;
    // se utiliza ese puntero para darle el valor del inicio de la lista
    aux = lista->inicio;
    // se recorre hasta llegar a la posicion pasada por parametro
    for(int i = 0; i < pos; i++) {
            //aux toma la direccion del nodo que buscamos
        aux = aux->prox;
    }

    // guradamos el valor del nodo en un puntero para que quede guardado fuera de la funcion y poder obtenerlo
    *item = aux->item;

    return 1; // retornamos 1 como su fuera un true
}


//obtiene el tamaño de la funcion
int obtenerTamanio(ListaEnc lista, int* tam) {

    *tam = lista->tam;

    return 1;
}



void imprimir(ListaEnc lista) {//pasamos la lista a imprimir por parametro
    //declaramos cantidad para obtener el tamanio de la lista
    int cantidad;
    //guardamos en cantidad el valor de tamanio con la funcio obtenerTamanio
    obtenerTamanio(lista, &cantidad);

    // iteramos con un for para repasar la posicion de la lista
    printf("[");
    for(int i = 0;i < cantidad; i++) {
        // decalramos variable para guardar el elemento de la lista
        int cadaElemento;
        //con la funcion obtener elemento guardamos el elemento en cadaElemanto
        obtenerElemento(lista, &cadaElemento, i);
        //impirmimos por pantalla cada elemento **parece que dentro del for no necesita la i para iterar**
        printf(" %d ", cadaElemento);
    }
    printf("]\n");
}



