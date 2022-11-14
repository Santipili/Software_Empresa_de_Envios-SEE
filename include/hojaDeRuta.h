#include "camion.h"
#include "ciudad.h"
#include "chofer.h"
#include "ruta.h"
#include "remolque.h"
#include <iostream>

using namespace std;

class hojaDeRuta
{
private:
    long int PedidoID;
    ciudad CiudadOrigen;
    ciudad CiudadDestino;
    camion Camion;
    chofer Chofer;
    ruta Ruta;
    remolque Remolque;
public:
    hojaDeRuta(/* args */);
    ~hojaDeRuta();
    void setPedidoID(long int);
    void setCiudadOrigen(ciudad);
    void setCiudadDestino(ciudad);
    void setCamion(camion);
    void setChofer(chofer);
    void setRuta(ruta);
    void setRemolque(remolque);
    long int getPedidoID();
    ciudad getCiudadOrigen();
    ciudad getCiudadDestino();
    camion getCamion();
    chofer getChofer();
    ruta getRuta();
    remolque getReolque();
};

