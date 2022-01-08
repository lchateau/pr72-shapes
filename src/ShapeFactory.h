#pragma once

#include "Shape.h"
#include <string>

class ShapeFactory
{
public:
    static Shape *createShape(const std::string &name);
};