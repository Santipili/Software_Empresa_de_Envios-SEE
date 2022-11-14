#include <iostream>

using namespace std;


class chofer
{
private:
    string nombre;
    long int DNI;
public:
    chofer();
    ~chofer();
    void setNombre(string);
    void setDNI(long int);
    string getNombre();
    long int getDNI(); 
};

