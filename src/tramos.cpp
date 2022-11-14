#include "include/tramos.h"
#include <iostream>

tramos::tramos(/* args */)
{
}

tramos::~tramos()
{
}


void tramos :: setNombre(string _nombre)
{
    nombre = _nombre;
}

void tramos :: setKm(int _km)
{
    km = _km;
}

string tramos :: getNombre()
{
    return nombre;
}

int tramos :: getKm()
{
    return km;
}