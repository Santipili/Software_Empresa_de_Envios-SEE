#pragma once 

#include <iostream>

using namespace std;

class bulto
{
private:
    float width;
    float height;
    float weight;
public:
    bulto();
    ~bulto();
    void setWidth(float);
    void setHeight(float);
    void setWeight(float);
    float getWidth();
    float getHeight();
    float getWeight();
};

