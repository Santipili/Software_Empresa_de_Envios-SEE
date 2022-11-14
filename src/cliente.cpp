#include "include/cliente.h"

cliente::cliente(/* args */)
{
}

cliente::~cliente()
{
}


void cliente :: setNombreCompleto(string _nombreCompleto)
{
    nombreCompleto = _nombreCompleto;
}

void cliente :: setDNI(long int _DNI)
{
    DNI = _DNI;
}

string cliente :: getNombreCopleto()
{
    return nombreCompleto;
}

long int cliente :: getDNI()
{
    return DNI;
}
