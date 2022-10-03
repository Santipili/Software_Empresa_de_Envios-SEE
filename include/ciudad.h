#ifndef CIUDAD_H
#define CIUDAD_H

#include <iostream>

class Ciudad
{
private:
    std::string nombre;
public:
    Ciudad(std::string);
    ~Ciudad();
    void setCiudad(std::string);
    std::string getCiudad();
};


#endif //CIUDAD_H    