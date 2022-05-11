#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

//Primitivas

//PRE:
//POST:
//AXIOMAS:

struct PersonaEstructura;

typedef struct PersonaEstructura * Persona;


//PRE:
//POST:
//AXIOMAS:

Persona crearPersona(char nombre[], int dni);


//PRE:
//POST:
//AXIOMAS:

void mostrarPersona(Persona p);

//PRE:
//POST:
//AXIOMAS:

void eliminarPersona(Persona p);

//gets & sets

//PRE:
//POST:
//AXIOMAS:

char * getNombre(Persona p);

//PRE:
//POST:
//AXIOMAS:

int getDniPersona(Persona p);

//PRE:
//POST:
//AXIOMAS:

void setNombrePersona(Persona p, char nombre[20]);

//PRE:
//POST:
//AXIOMAS:

void setDniPersona(Persona p, int dni);


#endif // PERSONA_H_INCLUDED
