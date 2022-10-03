#ifndef HOJADERUTA_H
#define HOJADERUTA_H

#include "./Bulto.h"
#include "./Ciudad.h"
#include "./Camion.h"
#include "./Chofer.h"
#include "./Ruta.h"

class HojaDeRuta
{
private:
    Bulto paquete;
    Ciudad ciudad_origen;
    Ciudad ciudad_destino;
    Camion camion_asignado;
    Chofer chofer_asignado;
    Ruta ruta_elegida;
    
public:
    HojaDeRuta(/* args */);
    ~HojaDeRuta();
};



#endif //HOJADERUTA_H