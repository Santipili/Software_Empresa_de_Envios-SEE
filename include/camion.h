#include <iostream>

using namespace std;

class camion
{
private:
    bool propio;
    string matricula;

public:
    camion();
    ~camion();
    void setPropio(bool);
    void setMatricula(string);
    bool getPropio();
    string getMatricula();
};


