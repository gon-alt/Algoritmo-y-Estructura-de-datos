#ifndef LISTAGENERICA_H_INCLUDED
#define LISTAGENERICA_H_INCLUDED

enum booleanos {FALSE, TRUE};

struct NodoE;

struct ListaE;

typedef struct NodoE * Nodo;

typedef struct ListaE * Lista;

//primitivas

Nodo crearNodo(Lista lista, void * data);

Lista crearLista(int tamDatoByte);

int estaVacia(Lista lista);

int obtenerTamanio(Lista lista);

void * obtenerDato(Lista lista, int pos);

void * obtenerPrimerDato(Lista lista);

void * obtenerUltimoDato(Lista lista);

int obtenerDatoParametro(Lista lista, int pos, void *backup);

int insertar(Lista lista, void *data, int pos);

int insertarInicio(Lista lista, void *data);

int insertarFinal(Lista lista, void *data);

int removerInicio(Lista lista, void *backup);

int removerFinal(Lista lista, void *backup);

int remover(Lista lista, int pos, void *backup);

void liiberarLista(Lista lista);

int buscarEnLista(Lista lista, int* pos, int dato);

void mostrarLista(Lista lista);



#endif // LISTAGENERICA_H_INCLUDED
