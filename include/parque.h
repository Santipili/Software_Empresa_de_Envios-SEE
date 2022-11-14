#include "include/remolque.h"
#include <iostream>

using namespace std;

class parque
{
private:
    string direccion;
    int aforo;
public:
    parque(/* args */);
    ~parque();
    void setDireccion(string);
    void setAforo(int);
    string getDireccion();
    int getAforo();
    bool verificarAforo();
};

