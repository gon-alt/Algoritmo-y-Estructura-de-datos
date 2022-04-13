#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
#include "carton.h"
#include "jugador.h"
#include "jugar.h"
#include "funciones.h"

using namespace std;

int main()
{
    cout << "Bienvenido a la Quiniela Plus" << endl;

	Jugador j1;

	j1 = crearJugador();

	Jugar ju;

	ju = crearJuego();

	mostrarJugada(ju);

    mostrarJugador(j1);

    cout<<  "Tiene " << contarAciertos(ju, j1) << " aciertos\n "<< endl;

    comprobarGanador(ju,j1);

    mostrarCartonGanador(ju, j1);

    guardarCarton(ju, j1);



    return 0;
}
