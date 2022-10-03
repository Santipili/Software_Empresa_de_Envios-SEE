#include "./include/Chofer.h"

Chofer::Chofer(){
    nombre= "nombre";
    apellido="apellido";
    dni= 000000000; 
};

Chofer::~Chofer() {};
void Chofer::setApellido(std::string _apellido){apellido = _apellido;}
void Chofer::setNombre(std::string _nombre){nombre=_nombre;}
void Chofer::setDni(int long _dni){dni=_dni;}
std::string Chofer::getApellido(){return apellido;}
std::string Chofer::getNombre(){return nombre;}
int long Chofer::getDni(){return dni;}