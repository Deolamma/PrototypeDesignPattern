#include <iostream>
#include "Rectangle.h"
#include "Circle.h"

int main()
{
    
    std::unique_ptr<Shape> rectanglePrototype = std::make_unique<Rectangle>(5.0, 3.0);
    std::unique_ptr<Shape> circlePrototype = std::make_unique<Circle>(5.0);

    auto rectangleClone = rectanglePrototype->clone();
    auto circleClone = circlePrototype->clone();

    circleClone->draw();
    rectangleClone->draw();
    std::cout << std::endl;

    //Dynamically casting Rectangle from it base type Shape to Rectangle
    //This is often seen as an expensive operation as well
    dynamic_cast<Rectangle*>(rectangleClone.get())->setHeight(7.0);
    dynamic_cast<Rectangle*>(rectangleClone.get())->setWidth(10.0);

    //Dynamically casting Circle from it base type Shape to Circle
    //This is often seen as an expensive operation
    dynamic_cast<Circle*>(circleClone.get())->setRadius(15.0);

    std::cout << "Rectangle Clone: ";
    rectangleClone->draw();
    std::cout << "Original Rectangle Object: ";
    rectanglePrototype->draw();

    std::cout << std::endl;

    std::cout << "Circle Clone: ";
    circleClone->draw();
    std::cout << "Original Circle Object: ";
    circlePrototype->draw();

    std::cout << std::endl;
    
}

