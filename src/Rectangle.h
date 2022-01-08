#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
private:
    int x;
    int y;

public:
    Rectangle(int x, int y);
    virtual ~Rectangle(){};
    double getArea() const override;
    double getLength() const override;
};