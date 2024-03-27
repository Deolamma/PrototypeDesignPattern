#pragma once
#include <iostream>
#include "Shape.h"

class Circle : public Shape
{
	double radius;
public:
	Circle(double r) : radius {r} {}
	std::unique_ptr<Shape> clone() override;
	void draw() const override;
	void setRadius(double const);
};

