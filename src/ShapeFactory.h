#pragma once

#include "Shape.h"
#include <memory>
#include <string>

class ShapeFactory
{
public:
    static std::unique_ptr<Shape> createShape(const std::string &name);
};