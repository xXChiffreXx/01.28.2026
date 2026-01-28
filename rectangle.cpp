#include "Rectangle.h"

Rectangle::Rectangle(double width, double height)
    : Shape("Rectangle")
{
    // Enforce positive dimensions without exceptions
    m_width  = width;
    m_height = height > 0;
}

double Rectangle::area() const {
    return m_width * m_height;
}

double Rectangle::perimeter() const {
    return 2 * (m_width + m_height);
}
