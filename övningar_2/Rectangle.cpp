#include "Rectangle.h"

Rectangle::Rectangle() : width(0), height(0)
{

}

Rectangle::Rectangle(float width, float height) : width(width), height(height)
{

}

void Rectangle::setWidth(float width)
{
	this->width = width;
}

float Rectangle::getWidth()
{
	return this->width;
}

void Rectangle::setHeight(float height)
{
	this->height = height;
}

float Rectangle::getHeight()
{
	return this->height;
}

float Rectangle::circumference() const
{
	/*float circumference =*/ /*this->width * this->height;*/
	if(this->width != 0 && this->height != 0) return (this->width + this->height) * 2;

	return 0;
	
}

float Rectangle::area() const
{
	return this->width * this->height;
}

bool Rectangle::operator==(const Rectangle& other) const
{
	return this->circumference() == other.circumference();
}

bool Rectangle::operator!=(const Rectangle& other) const
{
	return !(*this == other);
}

bool Rectangle::operator>(const Rectangle& other) const
{
	return this->circumference() > other.circumference();
}

bool Rectangle::operator<(const Rectangle& other) const
{
	return this->circumference() < other.circumference();
}



