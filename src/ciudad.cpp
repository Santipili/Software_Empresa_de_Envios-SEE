#include "include/ciudad.h"
#include <iostream>

using namespace std;


ciudad::ciudad(/* args */)
{
}

ciudad::~ciudad()
{
}

void ciudad :: setNombre(string _nombre)
{
    nombre = _nombre;
}

string ciudad :: getNombre()
{
    return nombre;
}