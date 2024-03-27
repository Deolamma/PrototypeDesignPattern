#include "Circle.h"

std::unique_ptr<Shape> Circle::clone()
{
	return std::make_unique<Circle>(*this);
}

void Circle::draw() const
{
	std::cout << "Drawing Circle... Radius: " << radius << std::endl;
}

void Circle::setRadius(double const newRadius)
{
	radius = newRadius;
}
