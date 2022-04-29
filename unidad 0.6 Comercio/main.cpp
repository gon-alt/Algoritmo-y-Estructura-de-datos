#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "producto.h"
#include "persona.h"
#include "fecha.h"
#include "factura.h"
#include "detalleCompra.h"


using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    Factura f1;

    f1 = crearFactura(1);

    mostrarFactura(f1);

    return 0;
}
