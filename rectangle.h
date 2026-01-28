#pragma once 

#include "Shape.h"

class Rectangle : public Shape {
public:
    Rectangle(double width, double height);

    double area() const;
    double perimeter() const;

private:
    double m_width;
    double m_height;
};
