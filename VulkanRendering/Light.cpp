#include "Light.hpp"

Light::Light()
{
    //ctor
}

Light::~Light()
{
    //dtor
}

Light::Light(const Light& other)
{
    //copy ctor
}

Light& Light::operator=(const Light& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
