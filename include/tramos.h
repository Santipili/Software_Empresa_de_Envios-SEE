#include <iostream>

using namespace std;

class tramos
{
private:
    string nombre;
    int km;
public:
    tramos(/* args */);
    ~tramos();
    void setNombre(string);
    void setKm(int);
    string getNombre();
    int getKm();
};

