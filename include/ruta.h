#include "include/tramos.h"
#include <iostream>
#include <vector>

using namespace std;

class ruta
{
private:
    vector <tramos> listaDeTramos;
public:
    ruta(/* args */);
    ~ruta();
    void setListaDeTramos(vector <tramos>);
    vector <tramos> getListaDeTrammos();
};

ruta::ruta(/* args */)
{
}

ruta::~ruta()
{
}
