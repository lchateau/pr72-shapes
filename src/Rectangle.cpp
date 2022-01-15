#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle() : x(0), y(0)
{
    std::cout << "Rectangle::Rectangle()" << std::endl;
}

Rectangle::Rectangle(int x, int y) : x(x), y(y)
{
    std::cout << "Rectangle::Rectangle(int x, int y)" << std::endl;
}

Rectangle::Rectangle(const Rectangle &other) : x(other.x), y(other.y)
{
    std::cout << "Rectangle::Rectangle(const Rectangle &other)" << std::endl;
}

Rectangle::Rectangle(Rectangle &&other) noexcept : x(other.x), y(other.y)
{
    other.x = 0;
    other.y = 0;
    std::cout << "Rectangle::Rectangle(Rectangle &&other)" << std::endl;
}

Rectangle::~Rectangle()
{
    std::cout << "Rectangle::~Rectangle()" << std::endl;
}

double Rectangle::getArea() const
{
    return x * y;
}

double Rectangle::getLength() const
{
    return 2 * (x + y);
}

std::ostream &operator<<(std::ostream &os, const Rectangle &rectangle)
{
    os << "Rectangle(";
    os << "x=" << rectangle.x << ", ";
    os << "y=" << rectangle.y << ", ";
    os << "area=" << rectangle.getArea() << ", ";
    os << "length=" << rectangle.getLength();
    os << ")" << std::endl;
    return os;
}