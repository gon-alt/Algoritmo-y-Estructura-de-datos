#ifndef LISTA_ENC_H
#define LISTA_ENC_H
#include "dato.h"

#define TRUE 1
#define FALSE 0
#define OK 1
#define ESTRUCTURA_NO_INICIALIZADA -1
#define ESTRUCTURA_VACIA -2
#define INDICE_INVALIDO -3
#define PARAMETRO_INVALIDO -4

// Declaramos la estructura del nodo, prox es un puntero al siguiente nodo
struct NodoE;

typedef struct NodoE * No;

struct ListaEncE ;

typedef struct ListaEncE * ListaEnc;




ListaEnc crearLista();

int liberarLista(ListaEnc lista);
int estaVacia(ListaEnc lista);

int insertarInicio(ListaEnc lista, Dato item);
int insertar(ListaEnc lista, Dato item, int pos);
int insertarFin(ListaEnc lista, Dato item);

int removerInicio(ListaEnc lista, Dato* item);
int remover(ListaEnc lista, Dato* item, int pos);
int removerFin(ListaEnc lista, Dato* item);

int obtenerElemento(ListaEnc lista, Dato* item, int pos);
int obtenerTamanio(ListaEnc lista, int* tam);


void imprimir(ListaEnc lista);

#endif


