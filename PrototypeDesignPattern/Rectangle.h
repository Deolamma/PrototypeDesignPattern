#pragma once
#include <iostream>
#include "Shape.h"
class Rectangle : public Shape
{
	double width;
	double height;
	
public:
	Rectangle(double width, double height) : width{ width }, height{ height } {}
	virtual std::unique_ptr<Shape> clone() override;
	void draw() const override;
	void setWidth(double const);
	void setHeight(double const);
};

