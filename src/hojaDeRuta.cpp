#include "include/hojaDeRuta.h"
#include <iostream>

using namespace std;


hojaDeRuta::hojaDeRuta(/* args */)
{
}

hojaDeRuta::~hojaDeRuta()
{
}

void hojaDeRuta :: setPedidoID(long int _PedidoID)
{
    PedidoID = _PedidoID;
}

void hojaDeRuta :: setCiudadOrigen(ciudad _CiudadOrigen)
{
    CiudadOrigen = _CiudadOrigen;
}

void hojaDeRuta :: setCiudadDestino(ciudad _CiudadDestino)
{
    CiudadDestino = _CiudadDestino;
}

void hojaDeRuta :: setCamion(camion _Camion)
{
    Camion = _Camion;
}

void hojaDeRuta :: setChofer(chofer _Chofer)
{
    Chofer = _Chofer;
}

void hojaDeRuta :: setRuta(ruta _Ruta)
{
    Ruta = _Ruta;
}

void hojaDeRuta :: setRemolque(remolque _Remolque)
{
    Remolque = _Remolque;
}

long int hojaDeRuta :: getPedidoID()
{
    return PedidoID;
}

ciudad hojaDeRuta :: getCiudadOrigen()
{
    return CiudadOrigen;
}

ciudad hojaDeRuta :: getCiudadDestino()
{
    return CiudadDestino;
}

camion hojaDeRuta :: getCamion()
{
    return Camion;
}

chofer hojaDeRuta :: getChofer()
{
    return Chofer;
}

ruta hojaDeRuta :: getRuta()
{
    return Ruta;
}

remolque hojaDeRuta :: getReolque()
{
    return Remolque;
}
