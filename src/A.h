#pragma once

#include <vector>
#include <memory>
#include "Shape.h"

class A
{
private:
    std::vector<std::unique_ptr<Shape>> shapes;

public:
    A();
    A(const A &a) = delete;
    virtual ~A() = default;
};