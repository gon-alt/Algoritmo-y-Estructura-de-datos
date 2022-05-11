#ifndef JUGADOR_H_INCLUDED
#define JUGADOR_H_INCLUDED
#include "carton.h"

struct JugadorEstructura;

typedef struct JugadorEstructura * Jugador;

Jugador crearJugador();

void mostrarJugador(Jugador j);

//getter y seeter

char * getNombre(Jugador j);

int * getCartonJugador(Jugador j);

int * getDni(Jugador j);


#endif // JUGADOR_H_INCLUDED
