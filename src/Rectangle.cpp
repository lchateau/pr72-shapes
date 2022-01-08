#include "Rectangle.h"

Rectangle::Rectangle(int x, int y)
{
    this->x = x;
    this->y = y;
}

int Rectangle::getArea() const
{
    return x * y;
}

int Rectangle::getLength() const
{
    return 2 * (x + 1);
}