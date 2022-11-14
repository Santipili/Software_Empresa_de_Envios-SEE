#include "include/ruta.h"
#include <iostream>

using namespace std;


ruta::ruta(/* args */)
{
}

ruta::~ruta()
{
}

void ruta :: setListaDeTramos(vector <tramos> _listaDeTramos)
{
    listaDeTramos = _listaDeTramos;
}

vector <tramos> ruta :: getListaDeTrammos()
{
    return listaDeTramos;
}