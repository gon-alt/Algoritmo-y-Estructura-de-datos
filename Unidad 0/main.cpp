#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "dispositivo.h"
#include "persona.h"
#include "empleados.h"


using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    //Persona p1;

    //p1 = crearPersona();

    //mostrarPersona(p1);

    //eliminarPersona(p1);

    Empleado e1;

    e1 = crearEmpleado();

    mostrarEmpleado(e1);

    eliminarEmpleado(e1);




    return 0;
}
