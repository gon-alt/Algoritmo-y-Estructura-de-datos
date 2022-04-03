#ifndef CARTON_H_INCLUDED
#define CARTON_H_INCLUDED


//Definicion estructura carton
struct CartonEstructura;

typedef struct CartonEstructura * Carton;

//funciones y peocedimientos

Carton crearCartonTeclado();

Carton crearCarton();

void mostrarCarton(Carton c);

bool buscaRepetido(Carton c, int a);

int * getCarton(Carton c);




#endif // CARTON_H_INCLUDED
