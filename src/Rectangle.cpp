#include "Rectangle.h"

Rectangle::Rectangle(int x, int y)
{
    this->x = x;
    this->y = y;
}

double Rectangle::getArea() const
{
    return x * y;
}

double Rectangle::getLength() const
{
    return 2 * (x + y);
}