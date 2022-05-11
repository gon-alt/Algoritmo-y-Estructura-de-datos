#include <iostream>
#include "listaGenerica.h"

#include <stdlib.h>
#include <string.h>
/* ##declaramos nodo */

struct  NodoE {

    void * data;
    Nodo proximo;

};

/*declaramos lista*/

struct ListaE{

    Nodo primero;//para acceder al primero Nodo
    Nodo ultimo;//para acceder al ultimo Nodo
    int tamanio;//tamaño de la liata para saber la pos
    int tamDatoByte;//tamanio del dato para poder reservar memoria  y castear el dato

};

//primitivas

/*
pre: deber recibir una lista un el dato a insertar en la lista
pos: retorna un nuevo Nodo
*/
Nodo crearNodo(Lista lista, void * data){

    Nodo temp = new NodoE;

    temp->data = malloc (lista->tamDatoByte);

        /// esta linea remplaza a temp->data = data !!!!
    memcpy(temp->data, data, lista->tamDatoByte);

    return temp;

};

/*
pre: se debe indicar el tamanio del dato a guardar por parametro
pos: se crea una lista para almacenar un dato con el tamaño enviado por parametro
*/
Lista crearLista(int tamDatoByte){
//reserva de memoria para la lista
    Lista lista = new ListaE;

    //declaramos primero y ultimo como NULL
    lista->primero = lista->ultimo = NULL;
    //el tamanio de la lista se declara en 0
    lista->tamanio = 0;
    //se carga el tamanio del dato pasado por parametro
    lista->tamDatoByte = tamDatoByte;

    return lista;

};

/*
pre: recibe por parametro una lista
pos: retorna un true o false si la lista esta vacia o no
*/
int estaVacia(Lista lista){

    if(!lista){
        return TRUE;
    }

    return (lista->tamanio == 0);

};

/*
pre:
pos:
*/
int obtenerTamanio(Lista lista){

    if(!lista){

        return -1;
    }

    return lista->tamanio;

};

/*
pre:
pos:
*/
void* obtenerDato(Lista lista, int pos){

    //comprobamos que la lista y los parametros sean validos
    if(!lista || pos<0 || lista->tamanio <= 0|| pos >= lista->tamanio)
        return NULL;

    //si la posicion requerida = 0 retornamos el primer dato de la lista
    if(pos == 0)
        return lista->primero->data;

    //si la posicion requerida es igual al tamaño de la lista -1 retornamos el ultimo dato
    if(pos == lista->tamanio -1)
        return lista->ultimo->data;
    //decalramos nodo auxiliar para recorrer la lista
    Nodo f = NULL;
    for(int i=0; i<pos; i++){
        //inicializamos el nodo f en el primero de la lista cuando i = 0
        if(i==0)
            f = lista->primero;
        else//si i no es 0 el nodo apunta al proximo nodo
            f = f->proximo;
    }

    return f->proximo->data;

};

/*
pre:
pos:
*/
void* obtenerPrimerDato(Lista lista){

    if(!lista)
        return NULL;
    return lista->primero->data;

};

/*
pre:
pos:
*/
void* obtenerUltimoDato(Lista lista){

    if(!lista)
        return lista->ultimo->data;

};

/*
pre: se envia por parametro una lista, la posicion de la misma y un puntero para guaradar el dato
pos: se retorna un estado para saber el resultrado del proceso y el dato se guarda en el parametro
*/
int obtenerDatoParametro(Lista lista, int pos, void *backup){

        if (!lista || pos < 0 || lista->tamanio <= 0 || pos >= lista->tamanio) // lista esta vacia o nula
        return FALSE;

    if (pos == 0) {
        memcpy(backup, lista->primero->data, lista->tamDatoByte);
        return TRUE;
    }

    if (pos == lista->tamanio - 1) {
        memcpy(backup, lista->primero->data, lista->tamDatoByte);
        return TRUE;
    }

    Nodo f;
    for (int i = 0; i < pos; i++) {
        if (i == 0)
            f = lista->primero;
        else
            f = f->proximo;
    }

    memcpy(backup, f->proximo->data, lista->tamDatoByte);
    return TRUE;

};

/*
pos:
pre:
*/
int insertar(Lista lista, void *data, int pos){

    if (!lista || pos < 0 || pos > lista->tamanio) // lista nula o pos invalida
        return FALSE;

    if (pos == 0) //
        return insertarInicio(lista, data);

    if (pos == lista->tamanio)
        return removerFinal(lista, data);

    Nodo f = NULL;
    for ( int i = 0; i < pos; i++) {
        if (i == 0)
            f = lista->primero;
        else
            f = f->proximo;
    }

    Nodo temp;
    if (!(temp = crearNodo(lista, data)))
        return FALSE;

    temp->proximo = f->proximo;
    f->proximo = temp;
    lista->tamanio++;
    return TRUE;

};

/*
pos:
pre:
*/
int insertarInicio(Lista lista, void *data){

    Nodo temp;
    // si no se pudo crear el nodo retorna false
    if (!(temp = crearNodo(lista, data)))
        return FALSE;
    //si el tamaño de la lista es 0 se carga temp en null y se incrementa el tam de la lista
    if (lista->tamanio == 0) {
        lista->primero = lista->ultimo = temp;
        temp->proximo = NULL;
        lista->tamanio++;
        return TRUE;
    }
    // se apunta el nodo al principio de la lista
    temp->proximo = lista->primero;
    // se declara el nodo temp como el principio de la lista
    lista->primero = temp;
    // incrementa el tamaño de la lista
    lista->tamanio++;

    return TRUE;
};

/*
pos:
pre:
*/
int insertarFinal(Lista lista, void *data){

        Nodo temp;
        //si no se puede crear el nodo retorna false
    if (!(temp = crearNodo(lista, data)))
        return FALSE;
    //si el tamaño de la lista es 0 cargamos temp como null
    if (lista->tamanio == 0) {
        lista->primero = lista->ultimo = temp;
        temp->proximo = NULL;
        lista->tamanio++;
        return TRUE;
    } else {
        lista->ultimo->proximo = temp;
        lista->ultimo = temp;
        lista->ultimo->proximo = NULL;
    }

    lista->tamanio++;
    return TRUE;

};

/*
pos:
pre:
*/
void mostrarLista(Lista lista){

    for ( int i = 0; i< obtenerTamanio(lista); i++){

        //se castea la funcion void a un char para poder mostrar el dato
        char info = * ((char *) obtenerDato(lista, i));

  using namespace std; cout <<"/ %c /" << info <<endl;

    }

}

/*
pos:
pre:
*/
int removerInicio(Lista lista, void *backup){

    	if (lista->tamanio == 0)
		return FALSE;
    else if (lista->tamanio == 1) {
        memcpy(backup, lista->primero->data, lista->tamDatoByte);
        liiberarLista(lista);
    } else {
        Nodo proximoCpy = lista->primero->proximo;
        memcpy(backup, lista->primero->data, lista->tamDatoByte);

        free(lista->primero->data);
        free(lista->primero);
        lista->primero = proximoCpy;
        lista->tamanio--;
    }
    return TRUE;

};

/*
pos:
pre:
*/
int removerFinal(Lista lista, void *backup){

    if (!lista)
        return FALSE;

    // si la lista tiene 1 elemento hacemos backup y liberamos la
    if (lista->tamanio == 1) {
        memcpy(backup, lista->primero->data, lista->tamDatoByte);
        liiberarLista(lista);
    }
    // si la lista es mayor a 1
    else {
        //declaramos nodos para recorrer la lista
        Nodo f = NULL, ultimo = NULL;
        // backupiamos el dato
        memcpy(backup, lista->ultimo->data, lista->tamDatoByte);

        // recorremos la lista hasta el ultimo elemento
        for (f = lista->primero; f != lista->ultimo; f = f->proximo)
            ultimo = f;

        //

        free(lista->ultimo->data); // liberamos el ultimo dato de la memoria
        free(lista->ultimo); // liberamos de la memoria el ultimo nodo
        lista->ultimo = ultimo; // ultimo nodo es igual a ultimo
        lista->ultimo->proximo = NULL; // el ultimo nodo apumta a null
        lista->tamanio--;
    }
    return TRUE;


};

/*
pos:
pre:
*/
int remover(Lista lista, int pos, void *backup){

if (!lista || lista->tamanio<= 0 || pos < 0 || pos >= lista->tamanio)
        return FALSE;

    if (pos == lista->tamanio - 1)
        return removerFinal(lista, backup);

    if (pos == 0)
        return removerInicio(lista, backup);

    Nodo f = NULL, proximoCpy;
    for (int i = 0; i < pos; i++) {
        if (i == 0)
            f = lista->primero;
        else
            f = f->proximo;
    }

    proximoCpy = f->proximo->proximo; //
    memcpy(backup, f->proximo->data, lista->tamDatoByte);

    free(f->proximo->data); //
    free(f->proximo); //
    f->proximo = proximoCpy; //
    lista->tamanio--;
    return TRUE;


};

/*
pos:
pre:
*/
void liiberarLista(Lista lista){

    if (!lista || lista->tamanio <= 0 || lista->primero == NULL)
        return;

    Nodo proximo;
    for ( Nodo p = lista->primero; p != NULL;) {
        proximo = p->proximo;
        free(p->data);
        free(p);
        p = proximo;
    }

    lista->primero = NULL;
    lista->ultimo = NULL;
    lista->tamanio= 0;


};
