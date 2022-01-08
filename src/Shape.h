#pragma once

class Shape
{
public:
    virtual ~Shape() = default;
    virtual double getArea() const = 0;
    virtual double getLength() const = 0;
};