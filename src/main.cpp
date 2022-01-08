#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "ShapeFactory.h"

int main(int argc, char const *argv[])
{
    Rectangle r(2, 3);
    std::cout << "Rectangle (2,3) -> area: " << r.getArea() << ", length: " << r.getLength() << std::endl;

    Triangle t(3, 4, 5);
    std::cout << "Triangle (3,4,5) -> area: " << t.getArea() << ", length: " << t.getLength() << std::endl;

    const Shape *s = ShapeFactory::createShape("Circle");
    std::cout << "Shape -> area: " << s->getArea() << ", length: " << s->getLength() << std::endl;

    Circle c(1);
    std::cout << "Circle -> area: " << c.getArea() << ", length: " << c.getLength() << std::endl;
    return 0;
}
