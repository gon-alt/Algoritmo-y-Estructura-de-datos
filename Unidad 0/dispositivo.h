#ifndef DISPOSITIVO_H_INCLUDED
#define DISPOSITIVO_H_INCLUDED

struct dispositivoEstructura;

typedef struct dispositivoEstructura * Dispositivo;

Dispositivo crearDispositivo();

void mostrarDispositivo(Dispositivo d);

#endif // DISPOSITIVO_H_INCLUDED
