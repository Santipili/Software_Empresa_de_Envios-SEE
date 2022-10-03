#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
class Cliente
{
private:
   std::string nombre;
   int long dni;
public:
    Cliente(std::string, int long);
    ~Cliente();
};

#endif //CLIENTE_H