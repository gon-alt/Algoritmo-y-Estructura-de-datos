#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "dispositivo.h"


using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    Dispositivo d;

    d = crearDispositivo();

    mostrarDispositivo(d);

    return 0;
}
