#include "ShapeFactory.h"

#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

#include <stdexcept>

std::unique_ptr<Shape> ShapeFactory::createShape(const std::string &name)
{
    if (name == "Circle")
    {
        return std::make_unique<Circle>(1);
    }
    if (name == "Rectangle")
    {
        return std::make_unique<Rectangle>(1, 1);
    }
    else if (name == "Triangle")
    {
        return std::make_unique<Triangle>(1, 1, 1);
    }
    throw std::invalid_argument("type " + name + " is not supported");
}