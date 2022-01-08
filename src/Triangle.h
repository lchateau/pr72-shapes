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
    double getArea() const override;
    double getLength() const override;
};