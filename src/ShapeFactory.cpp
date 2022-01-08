#include "ShapeFactory.h"

#include "Rectangle.h"
#include "Triangle.h"

#include <stdexcept>

Shape *ShapeFactory::createShape(const std::string &name)
{
    if (name == "Rectangle")
    {
        return new Rectangle(1, 1);
    }
    else if (name == "Triangle")
    {
        return new Triangle(1, 1, 1);
    }
    throw std::invalid_argument("type " + name + " is not supported");
}