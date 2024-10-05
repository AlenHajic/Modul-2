#ifndef CIRCLE_H
#define CIRCLE_H

#include <string>

class Circle
{
public:
    Circle();
    Circle(float radius);
    float getRadius() const; 
    void setRadius(float radius);
    float calcCircumference() const; 
    float calcArea() const; 

    bool operator==(const Circle& other) const;
    bool operator!=(const Circle& other) const; 

private:
    float radius;
};

#endif // CIRCLE_H
