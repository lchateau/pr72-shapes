#pragma once

#include <iostream>

class Shape
{
public:
    virtual double getArea() const = 0;
    virtual double getLength() const = 0;
};