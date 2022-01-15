#include "A.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

#include <cstdlib>

A::A()
{
    for (int i = 0; i < 100; i++)
    {
        int shape = rand() % 100;
        if (shape < 12)
        {
            shapes.push_back(std::make_unique<Circle>(rand() % 18));
        }
        else if (shape < 56)
        {
            shapes.push_back(std::make_unique<Rectangle>(rand() % 10, rand() % 15));
        }
        else
        {
            int i = rand() % 15;
            shapes.push_back(std::make_unique<Triangle>(i, i, i));
        }
    }

    for (auto &shape : shapes)
    {
        std::cout << "s: " << (*shape.get());
    }
}

A::~A(){};