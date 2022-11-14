#include "include/bulto.h"
#include <iostream>

bulto::bulto()
{
}

bulto::~bulto()
{
}

void bulto::setWidth(float _width)
{
    width = _width;
} 
void bulto::setHeight(float _height)
{
    height = _height;
} 
void bulto::setHeight(float _weight)
{
    weight = _weight;
} 

float bulto::getWidth()
{
    return width;
}

float bulto::getHeight()
{
    return height;
}

float bulto::getWeight()
{
    return weight;
}