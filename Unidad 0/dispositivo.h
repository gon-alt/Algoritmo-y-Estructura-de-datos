#ifndef DISPOSITIVO_H_INCLUDED
#define DISPOSITIVO_H_INCLUDED

//Primitivas


//PRE:
//POST:
//AXIOMAS:

struct DispositivoEstructura;

typedef struct DispositivoEstructura * Dispositivo;


//PRE:
//POST:
//AXIOMAS:

Dispositivo crearDispositivo();


//PRE:
//POST:
//AXIOMAS:

void destruirDispositivo(Dispositivo d);


//PRE:
//POST:
//AXIOMAS:

void mostrarDispositivo(Dispositivo d);

//gets & sets

//PRE:
//POST:
//AXIOMAS:

char * getTipoDispositivo(Dispositivo d);

//PRE:
//POST:
//AXIOMAS:

char * getMarcaDispositivo(Dispositivo d);

//PRE:
//POST:
//AXIOMAS:

float getPrecioDispositivo(Dispositivo d);

//PRE:
//POST:
//AXIOMAS:

float getMemoriaDispositivo(Dispositivo d);

//PRE:
//POST:
//AXIOMAS:

void setTipoDispositivo(Dispositivo d, char tipo[20]);

//PRE:
//POST:
//AXIOMAS:

void setMarcaDispositivo(Dispositivo d, char marca[20]);

//PRE:
//POST:
//AXIOMAS:

void setPrecioDispositivo(Dispositivo d, float precio);

//PRE:
//POST:
//AXIOMAS:

void setMemoriaDispositivo(Dispositivo d, float memoria);


#endif // DISPOSITIVO_H_INCLUDED
