#include<stdio.h>
#include<stdlib.h>
#include "lista.h"

struct NodoE{
  int item;
  Nodo prox;
};



 struct ListaEncE {
  Nodo inicio;
  int tam;
};


/*
pre: La lista no debe estar creada

pos: Se obtiene una lista vacia tamaño 0 con el inicio apuntando a NULL

aximoas:
*/
ListaEnc crearLista() {
    // se reserva memoria para un dato tipo lista
    ListaEnc lista = malloc(sizeof(struct ListaEncE));

    // si lista es =  NULL retorna NULL
    if (lista == NULL){
        return NULL;}

    // el principio de la lista apunta a NULL
    lista->inicio = NULL;
    // el tamaño de la lista se declara en 0
    lista->tam = 0;

    // retornamos una lista
    return lista;
}

/*
pre: Se necesita una lista inicializada con al menos un nodo

pos: Se remueven todos los nodos de la lista

aximoas: la lista debe contener nodos o esta apuntando a null
*/
int liberarLista(ListaEnc lista) {

    // si la lista es = null la estructura no esta inicializada
    if (lista == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;}

    // mientras la lista no este vacia se removen todos los elementos da lista
    while(!estaVacia(lista)){

            //se utiliza la funcion remover q envia null como aux para guardar dato recuperado y 0 como posicion de la lista
        remover(lista, NULL, 0);}
    // se libera la memoria ocupada por la lita
    free(lista);

    // se apunta el inicio de la lista a null
    lista->inicio = NULL; //El tamañpo ya quedo en cero por los remove tam--



    return OK;
}

/*
pre: Se necesita recibir una lista

pos: se retorna un true o false dependiendo si la lista esta vacia o no

aximoas:
*/
int estaVacia(ListaEnc lista) {
    if (lista == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;}

    if (lista->inicio == NULL){
        return TRUE;}

    return FALSE;
}

/*
pre: el nodo no debe estar inicializado

pos: Se crea un nodo con el dato y apuntando al siguiente nodo que se pasa por parametro

aximoas:
*/
Nodo crearNodo(int item, Nodo prox) {


	Nodo nodo = malloc(sizeof(struct NodoE));


	if (nodo == NULL){
        return NULL;}

	nodo->item = item;
	nodo->prox = prox;

	return nodo;


}

/*
pre: recibe una lista por parametro

pos: inserta un nodo al principio de la lista

aximoas:
*/

int insertarInicio(ListaEnc lista, int item) {
    if (lista == NULL){
        return ESTRUCTURA_NO_INICIALIZADA;}
    // se declara un nuevo nodo y se lo carga con crear nodo el cual carga el dato a guardar y pasa la direccion del inicio de la lista
    // que es donde va a apuntar el nuevo nodo
    Nodo nuevoNodo= crearNodo(item, lista->inicio);

    if (nuevoNodo== NULL){
        return ESTRUCTURA_NO_INICIALIZADA;}
    // ahora se apunta el inicio de la lista a este nuevo nodo creado
    lista->inicio = nuevoNodo;
    // se incrementa el tamaño de la lista
    lista->tam++;

    return OK;
}

/*
pre: recibe una lista por parametro

pos: inserta un nodo a la lista

aximoas:
*/
int insertar(ListaEnc lista, int item, int pos) {

    // chequeo de la lista
    if (lista == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;

    if (pos < 0 || pos > lista->tam)
        return INDICE_INVALIDO;

    // declara nuevo nodo
    Nodo nuevoNodo;
   // si pos es 0 reutiliza funcion insertar al inicio
    if (pos == 0) {

        return insertarInicio(lista, item);
   // si pos es > 0
    } else {
        // prepara para insertar
        Nodo aux;

        // se recorre con aux la posicion de la lista
        aux = lista->inicio;
        for(int i = 0; i < pos - 1; i++) {
            // aux recorre los nodos hasta tomar la direccion de la posicion pasada por parametro
            aux = aux->prox;
        }

        // se da valor a nuevoNodo con el item por parametro y la direccion de la lista en la pos recibida por parametro
        nuevoNodo= crearNodo(item, aux->prox);
        // ####### si nuevo nodo es = null se lo apunta al proximo nodo
        if (nuevoNodo== NULL)

            return ESTRUCTURA_NO_INICIALIZADA;

        aux->prox = nuevoNodo;
    }
    // incrementa el tamaño de la lista
    lista->tam++;

    return OK;
}

/*
pre: recibe una lista por parametro

pos: inserta un nodo al final de la lista

aximoas:
*/
int insertarFin(ListaEnc lista, int item) {
        // reutiliz la funcion insertar
    return insertar(lista, item, lista->tam);

}

/*
pre: la lista debe tener al menos un nodo, se debe enviar una lista y un puntero para guardar el dato

pos: se remueve el primer nodo de la lista

aximoas:
*/

int removerInicio(ListaEnc lista, int* item) {

    //chequeo de lista
    if (lista == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;
    if (estaVacia(lista))
        return ESTRUCTURA_VACIA;

    // se declara un nodo aux y se apunta al inicio de la lista
    Nodo aux = lista->inicio;

    // si item diferente de null toma el valir del item del primer nodo
    if (item != NULL)

        *item = aux->item;

    //apuntamos el principio de la lista al proximo nodo
    lista->inicio = aux->prox;
    // liberamos la memoria de aux que seria el primer nodo
    free(aux);
    //igualamos auxx a null para desreferenciar
    aux = NULL;
    // disminuye el tamaño de la lista
    lista->tam--;
    // retorna codigo de error ok
    return OK;

}

/*
pre: se debe enciar la lista, debe coontener al menos un nodo

pos: se retorna la lista con el nodo eliminado en la pos pasada por parametro y resta tam--

aximoas:
*/
int remover(ListaEnc lista, int* item, int pos) {

    //chequeo de lista!!
    if (lista == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;
    if (estaVacia(lista))
        return ESTRUCTURA_VACIA;
    if (pos < 0 || pos >= lista->tam)
        return INDICE_INVALIDO;

    // se declara dos nodos
    Nodo ant, atual;

    //si pos = 0 utiliza la funcion removerInicio()
    if (pos == 0) {
        //reutiliza la funcion remover al inicio
        return removerInicio(lista, item);

    } else {// si pos es > 0

        // prepara para remover
        ant = NULL;

        atual = lista->inicio;
        // recorremos la lista
        for(int i = 0; i < pos; i++) {

            ant = atual;
            atual = atual->prox;

        }

        // remove o nó atual

        ant->prox = atual->prox;

        if (item != NULL)

            *item = atual->item;

        free(atual);

        atual = NULL;
    }

    lista->tam--;

    return OK;
}

/*
pre: recibe una lista como parametro

pos: elimina el nodo al final de la lista

aximoas:
*/
int removerFin(ListaEnc lista, int* item){

    return remover(lista, item, lista->tam - 1);
}

/*
pre: recibe una lista y una posicion de la lista

pos: retorna el item de la lista en una direccion de memoria

aximoas:
*/
int obtenerElemento(ListaEnc lista, int* item, int pos) {

    // chequeo de la lista
    if (lista == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;

    if (estaVacia(lista))
        return ESTRUCTURA_VACIA;

    if (pos < 0 || pos >= lista->tam)
        return INDICE_INVALIDO;


    if (item == NULL)
        return PARAMETRO_INVALIDO;

    // declara un nodo auxiliar
    Nodo aux;
    // apunta aux al principio de la lista
    aux = lista->inicio;
    // aux toma la direccion del nodo en la posicion de la lista recibida por parametro
    for(int i = 0; i < pos; i++) {

        aux = aux->prox;

    }

    // el puntero a item recibe el dato guardado en el nodo
    *item = aux->item;

    return OK;
}

/*
pre: recibe una lista inicializada con al menos un nodo

pos: retorna el tamaño  de la lista

aximoas:
*/
int obtenerTamanio(ListaEnc lista, int* tam) {

    // chequeo de lista
    if (lista == NULL)
        return ESTRUCTURA_NO_INICIALIZADA;
    if (tam == NULL)
        return PARAMETRO_INVALIDO;

    // guardamos en un puntero el tamaño de la lista
    *tam = lista->tam;

    return OK;
}

/*
pre: recibe una lista con al menos un nodo

pos: muestra las datos almacenados en los nodos de la lista

aximoas:
*/
void imprimir(ListaEnc lista) {

    int cantidad;
   // gusradamos el tamanño de la lista en cantidad
    obtenerTamanio(lista, &cantidad);

    printf("[");

    for(int i = 0;i < cantidad; i++) {

        int el;
    // obtenemos el elemento y lo guardamos en el en cada iteracion
        obtenerElemento(lista, &el, i);
    // imprimimos el en cada iteracion del for
        printf(" %d ", el);

    }

    printf("]\n");

}

/*
pre: recibe por parametro una lista con al menos un nodo

pos: ordena la lista de menor a mayor o alfabeticamente

aximoas:
*/
void ordenarLista(ListaEnc lista){

    int tam;
    obtenerTamanio(lista, &tam);

    int aux;
    Nodo nodoActual;

    for(int i=0; i<tam; i++){

            nodoActual = lista->inicio;

        for(int j=0; j<tam-1; j++){

            if(nodoActual->item > nodoActual->prox->item){

                aux = nodoActual->item;
                nodoActual->item = nodoActual->prox->item;
                nodoActual->prox->item = aux;

            }

            nodoActual = nodoActual->prox;

        }

    }

};

/*
pre: recibe una lista y un dato para ser buscado en la lista

pos: retorna bool si el dato existe y la posicion en la lista

aximoas:
*/
int buscarEnLista(ListaEnc lista, int* pos, int dato){

    int tamanio;
    obtenerTamanio(lista, &tamanio);

    Nodo aux;
    aux = lista->inicio;

    //recorremos la lista
    for(int i=0; i<tamanio; i++){

            if(aux->item == dato){
                *pos = i;
                return TRUE;
            }

            aux = aux->prox;
    }

    return FALSE;
};
