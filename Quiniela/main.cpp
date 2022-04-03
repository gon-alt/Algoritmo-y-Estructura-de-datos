#include <iostream>
#include <cstring>
#include "carton.h"
#include "jugador.h"
#include "jugar.h"

using namespace std;

int main()
{
    cout << "Bienvenido a la Quiniela Plus" << endl;

	Jugador j;

	j = crearJugador();

	mostrarJugador(j);

	Jugar ju;

	ju = crearJuego();

	mostrarJugada(ju);

    cout<< "Aciertos: " << comprobarGanador(ju, j) << endl;


    return 0;
}
