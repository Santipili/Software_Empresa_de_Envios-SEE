#include "include/chofer.h"

#include <iostream>

using namespace std;


chofer::chofer(/* args */)
{
}

chofer::~chofer()
{
}


void chofer :: setNombre(string _nombre)
{
    nombre = _nombre;
}

void chofer :: setDNI(long int _DNI)
{
    DNI = _DNI;
}

string chofer :: getNombre()
{
    return nombre;
}

long int chofer :: getDNI()
{
    return DNI;
}