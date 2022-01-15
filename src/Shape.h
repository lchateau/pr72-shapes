#pragma once
#include <iostream>

class Shape
{
public:
    virtual ~Shape() = default;
    virtual double getArea() const = 0;
    virtual double getLength() const = 0;
    virtual std::ostream &print(std::ostream &os) const = 0;
    friend std::ostream &operator<<(std::ostream &os, const Shape &shape) { return shape.print(os); };
};