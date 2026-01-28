pragma once 

#include "Shape.h"

class Rectangle : public Shape {
public:
    Rectangle(double width, double height);

    double area() const override;
    double perimeter() const override;

private:
    double m_width;
    double m_height;
};

#endif // RECTANGLE_H
