#pragma once
#include <memory>
// This is the prototype class.
class Shape
{
public:
	virtual ~Shape() {}
	virtual std::unique_ptr<Shape> clone() = 0;
	virtual void draw() const = 0;
};

