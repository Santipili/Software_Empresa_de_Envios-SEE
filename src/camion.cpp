#include "include/camion.h"
#include <iostream>

using namespace std;

camion::camion(/* args */)
{
}

camion::~camion()
{
}


void camion :: setPropio(bool _propio)
{
    propio = _propio;
}

void camion :: setMatricula(string _matricula)
{
    matricula = _matricula;
}

bool camion :: getPropio()
{
    return propio;
}

string camion :: getMatricula()
{
    return matricula;
}