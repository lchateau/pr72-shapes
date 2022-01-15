#include "Circle.h"
#include <cmath>

Circle::Circle(int r) : r(r)
{
}

double Circle::getArea() const
{
    return M_PI * r * r;
}

double Circle::getLength() const
{
    return 2 * M_PI * r;
}

std::ostream &Circle::print(std::ostream &os) const
{
    os << "Circle(";
    os << "r=" << r << ", ";
    os << "area=" << getArea() << ", ";
    os << "length=" << getLength();
    os << ")" << std::endl;
    return os;
}