#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "producto.h"
#include "persona.h"
#include "fecha.h"
#include "factura.h"
#include "detalleCompra.h"
#include "listaGenerica.h"


using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    Lista listaProductos = crearLista(sizeof (Producto));

    //#cargamos una lista de productos
    Producto p1 = crearProducto("Rueda",50,01,10);
    insertarInicio(listaProductos, p1);

    p1 = crearProducto("Plato",10,02,10);
    insertarInicio(listaProductos, p1);

    p1 = crearProducto("Manubrio",25,03,10);
    insertarInicio(listaProductos, p1);
    //mostrarLista(listaProductos);

    //#creamos una factura
    Factura f1;

    f1 = crearFactura(1);

    mostrarFactura(f1);

    return 0;
}
