#pragma once

#include "Shape.h"

class Circle : public Shape
{
private:
    int r;

public:
    explicit Circle(int r);
    double getArea() const override;
    double getLength() const override;
};