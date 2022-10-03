#ifndef CHOFER_H
#define CHOFER_H

#include <iostream>

class Chofer
{
private:

   std::string nombre,apellido;
   int long dni;

public:

    Chofer(/* args */);
    ~Chofer();
    void setApellido(std::string);
    void setNombre(std::string);
    void setDni(int long);
    std::string getApellido();
    std::string getNombre();
    int long getDni();

};


#endif //CHOFER_H