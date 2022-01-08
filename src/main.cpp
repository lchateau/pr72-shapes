#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
#include "ShapeFactory.h"

int main(int argc, char const *argv[])
{
    Rectangle r(2, 3);
    std::cout << "Rectangle (2,3) -> area: " << r.getArea() << ", length: " << r.getLength() << std::endl;

    Triangle t(3, 4, 5);
    std::cout << "Triangle (3,4,5) -> area: " << t.getArea() << ", length: " << t.getLength() << std::endl;

    Shape *s = ShapeFactory::createShape("Rectangle");
    std::cout << "Shape -> area: " << s->getArea() << ", length: " << s->getLength() << std::endl;
    return 0;
}
