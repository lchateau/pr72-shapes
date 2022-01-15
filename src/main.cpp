#include <iostream>
#include <vector>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "ShapeFactory.h"
#include "A.h"

int main(int argc, char const *argv[])
{
    Rectangle r(2, 3);
    std::cout << "Rectangle (2,3) -> area: " << r.getArea() << ", length: " << r.getLength() << std::endl;

    Triangle t(3, 4, 5);
    std::cout << "Triangle (3,4,5) -> area: " << t.getArea() << ", length: " << t.getLength() << std::endl;

    std::unique_ptr<Shape> s = ShapeFactory::createShape("Circle");
    std::cout << "Shape -> area: " << s->getArea() << ", length: " << s->getLength() << std::endl;

    Circle c(1);
    std::cout << "Circle -> area: " << c.getArea() << ", length: " << c.getLength() << std::endl;

    std::cout << "Creating 4 rectangles" << std::endl;

    Rectangle r0;
    std::cout << "r0: " << r0 << std::endl;
    Rectangle r1(1, 1);
    std::cout << "r1: " << r1 << std::endl;
    Rectangle r2(r1);
    std::cout << "r2: " << r2 << std::endl;
    Rectangle r3(std::move(r1));
    std::cout << "r3: " << r3 << std::endl;
    std::cout << "r1 after move is: " << r1 << std::endl;

    std::cout << "Adding 4 rectangles to std::vector<Rectangle>" << std::endl;

    std::vector<Rectangle> rectangleVector;
    rectangleVector.push_back(r0);
    rectangleVector.push_back(r1);
    rectangleVector.push_back(r2);
    rectangleVector.push_back(r3);

    std::cout << "Adding 4 rectangles to std::vector<Rectangle *>" << std::endl;

    std::vector<Rectangle *> pointerVector;
    pointerVector.push_back(&r0);
    pointerVector.push_back(&r1);
    pointerVector.push_back(&r2);
    pointerVector.push_back(&r3);

    std::cout << "End" << std::endl;

    A a;

    return 0;
}
