#include "Model.hpp"

Model::Model()
{
    //ctor
}

Model::~Model()
{
    //dtor
}

Model::Model(const Model& other)
{
    //copy ctor
}

Model& Model::operator=(const Model& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
