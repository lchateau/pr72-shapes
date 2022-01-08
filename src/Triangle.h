#pragma once

#include "Shape.h"

class Triangle : public Shape
{
private:
    int a;
    int b;
    int c;

public:
    Triangle(int a, int b, int c);
    virtual ~Triangle(){};
    double getArea() const override;
    double getLength() const override;
};