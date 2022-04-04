#ifndef JUGAR_H_INCLUDED
#define JUGAR_H_INCLUDED

// definicion de estructura

struct JugarEstructura;

typedef struct JugarEstructura * Jugar;

// Funciones y procedimientos

Jugar crearJuego();

void mostrarJugada(Jugar j);

int contarAciertos(Jugar j, Jugador ju);

void comprobarGanador(Jugar j, Jugador ju);

void mostrarCartonGanador(Jugar j, Jugador ju);

// getter y setter

int * getJugada (Jugar j);




#endif // JUGAR_H_INCLUDED
