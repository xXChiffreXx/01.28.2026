#include <iostream>
#include <string>
using namespace std;
class Circle {
public:
		Circle(double r) : radius(r) {}
		double area() const {
			return 3.14159 * radius * radius;
		}
		double circumference() const {
			return 2 * 3.14159 * radius;
		}