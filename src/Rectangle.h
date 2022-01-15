#pragma once

#include "Shape.h"

class Rectangle : public Shape
{
private:
    int x;
    int y;

public:
    Rectangle();
    Rectangle(int x, int y);
    Rectangle(const Rectangle &other);
    Rectangle(Rectangle &&other) noexcept;
    ~Rectangle() override = default;
    double getArea() const override;
    double getLength() const override;
    std::ostream &print(std::ostream &os) const override;
};