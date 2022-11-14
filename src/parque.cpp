#include "include/parque.h"
#include <iostream>

using namespace std;

parque::parque(/* args */)
{
}

parque::~parque()
{
}

void parque :: setDireccion(string _direccion)
{
    direccion = _direccion;
}

void parque :: setAforo(int _aforo)
{
    aforo = _aforo;
}

string parque :: getDireccion()
{
    return direccion;
}

int parque :: getAforo()
{
    return aforo;
}

bool parque :: verificarAforo()
{
    
}