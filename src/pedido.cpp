#include "include/pedido.h"
#include <iostream>
#include <vector>

using namespace std;

pedido::pedido(/* args */)
{
}

pedido::~pedido()
{
}

void pedido :: setConst_id(long int _const_id)
{
    const_id = _const_id;
}

void pedido :: setPaquete(vector <bulto> _paquete)
{
    paquete = _paquete;
}

void pedido :: setCiudadOrigen(ciudad _ciudadOrigen)
{
    ciudadOrigen = _ciudadOrigen;
}

void pedido :: setCiudadDestino(ciudad _ciudadDestino)
{
    ciudadDestino = _ciudadDestino;
}

void pedido :: setPrecio(float _precio)
{
    precio = _precio;
}

void pedido :: setRecepcion(cliente _recepcion)
{
    recepcion = _recepcion;
}

long int pedido :: getConst_id()
{
    return const_id;
}

vector <bulto> pedido :: getPaquete()
{
    return paquete;
}

ciudad pedido :: getCiudadOrigen()
{
    return ciudadOrigen;
}

ciudad pedido :: getCiudadDestino()
{
    return ciudadDestino;
}

float pedido :: getPrecio()
{
    return precio;
}

cliente pedido :: getRecepcion()
{
    return recepcion;
}
