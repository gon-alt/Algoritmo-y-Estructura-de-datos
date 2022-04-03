#ifndef JUGAR_H_INCLUDED
#define JUGAR_H_INCLUDED

struct JugarEstructura;

typedef struct JugarEstructura * Jugar;

Jugar crearJuego();

void mostrarJugada(Jugar j);

int comprobarGanador(Jugar j, Jugador ju);




#endif // JUGAR_H_INCLUDED
