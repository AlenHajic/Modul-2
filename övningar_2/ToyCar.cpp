#include "ToyCar.h"

ToyCar::ToyCar() /*: color("Unknown"), model("Unknown")*/
{
	this->color = "red";
	this->model = "fiat";
}

ToyCar::ToyCar(string color, string model) : color(color), model(model)
{
}

void ToyCar::setColor(string color)
{
	this->color = color;
}

string ToyCar::getColor()
{
	return this->color;
}

string ToyCar::getModel()
{
	return this->model;
}

string ToyCar::toString()
{
	string car = this->model;
	car += " with the color ";
	car += this->color;
	return car;
}
