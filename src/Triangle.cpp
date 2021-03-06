#include "Triangle.h"
#include <cmath>

Triangle::Triangle(int a, int b, int c) : a(a), b(b), c(c)
{
}

double Triangle::getArea() const
{
    int s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

double Triangle::getLength() const
{
    return a + b + c;
}