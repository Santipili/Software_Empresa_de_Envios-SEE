#include "./include/Ciudad.h"

Ciudad::Ciudad(std::string _nombre){nombre=_nombre;}
Ciudad::~Ciudad(){}
void Ciudad::setCiudad(std::string _nombre){nombre = _nombre;}
std::string Ciudad::getCiudad(){return nombre;}