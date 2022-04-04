#ifndef DISPOSITIVO_H_INCLUDED
#define DISPOSITIVO_H_INCLUDED

struct DispositivoEstructura;

typedef struct DispositivoEstructura * Dispositivo;

Dispositivo crearDispositivo();

void mostrarDispositivo(Dispositivo d);

#endif // DISPOSITIVO_H_INCLUDED
