#include <iostream>

using namespace std;

class cliente
{
private:
    string nombreCompleto;
    long int DNI;
public:
    cliente(/* args */);
    ~cliente();
    void setNombreCompleto(string);
    void setDNI(long int);
    string getNombreCopleto();
    long int getDNI();

};

