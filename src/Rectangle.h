#pragma once

#include "Shape.h"

#include <iostream>

class Rectangle : public Shape
{
private:
    int x;
    int y;

public:
    Rectangle();
    Rectangle(int x, int y);
    Rectangle(const Rectangle &other);
    Rectangle(Rectangle &&other);
    double getArea() const override;
    double getLength() const override;
    friend std::ostream &operator<<(std::ostream &os, const Rectangle &rectangle);
};