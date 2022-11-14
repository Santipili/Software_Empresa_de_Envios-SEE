#include "bulto.h"
#include "ciudad.h"
#include "cliente.h"
#include <iostream>
#include <vector>

using namespace std;

class pedido
{
private:
    long int const_id;
    vector <bulto> paquete;
    ciudad ciudadOrigen;
    ciudad ciudadDestino;
    float precio;
    cliente recepcion;

public:
    pedido(/* args */);
    ~pedido();
    void setConst_id(long int);
    void setPaquete(vector <bulto>);
    void setCiudadOrigen(ciudad);
    void setCiudadDestino(ciudad);
    void setPrecio(float);
    void setRecepcion(cliente);
    long int getConst_id();
    vector <bulto> getPaquete();
    ciudad getCiudadOrigen();
    ciudad getCiudadDestino();
    float getPrecio();
    cliente getRecepcion();
};

