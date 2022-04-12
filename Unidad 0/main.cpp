#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "dispositivo.h"
#include "persona.h"


using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    Persona p1;

    p1 = crearPersona();

    mostrarPersona(p1);

    eliminarPersona(p1);


    return 0;
}
