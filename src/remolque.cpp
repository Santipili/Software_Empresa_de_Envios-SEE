#include "include/remolque.h"
#include <iostream>

using namespace std;

remolque::remolque()
{
}

remolque::~remolque()
{
}

void remolque :: setMatricula(string _matricula)
{
    matricula = _matricula;
}

void remolque :: setVacio(bool _vacio)
{
    vacio = _vacio;
}

string remolque :: getMatricula()
{
    return matricula;
}

bool remolque :: getVacio()
{
    return vacio;
}