#include "Rectangle.h"

std::unique_ptr<Shape> Rectangle::clone()
{
    return std::make_unique<Rectangle>(*this);
}

void Rectangle::draw() const
{
    std::cout << "Drawing a Rectangle... Width: " << width << " Height: " << height << std::endl;
}

void Rectangle::setWidth(double const newWidth)
{
    width = newWidth;
}

void Rectangle::setHeight(double const newHeight)
{
    height = newHeight;
}

