#include "Circle.h"
#include <cmath>

Circle::Circle() : radius(0) {}

Circle::Circle(float radius) : radius(radius) {}

float Circle::getRadius() const 
{ 
    return this->radius; 
}

void Circle::setRadius(float radius) {
    this->radius = radius;
}

float Circle::calcCircumference() const { 
    return 2 * 3.14159 * this->radius; 
}

float Circle::calcArea() const
{ 
    return 3.14159 * pow(radius, 2); 
}

bool Circle::operator==(const Circle& other) const
{ 
    return this->radius == other.radius; 
}

bool Circle::operator!=(const Circle& other) const
{ 
    return !(*this == other); 
}
