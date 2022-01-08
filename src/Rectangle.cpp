#include "Rectangle.h"

Rectangle::Rectangle(int x, int y) : x(x), y(y)
{
}

double Rectangle::getArea() const
{
    return x * y;
}

double Rectangle::getLength() const
{
    return 2 * (x + y);
}