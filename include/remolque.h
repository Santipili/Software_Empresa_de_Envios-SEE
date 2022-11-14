#include <iostream>

using namespace std;

class remolque
{
private:
    string matricula;
    bool vacio;
public:
    remolque();
    ~remolque();
    void setMatricula(string);
    void setVacio(bool);
    string getMatricula();
    bool getVacio();
};

