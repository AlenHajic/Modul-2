#include "Card.h"

Card::Card() : color("Null"), number(404)
{
}

Card::Card(string color, int number) : color(color), number(number)
{
}

string Card::getColor()
{
	return this->color;
}

int Card::getNumber()
{
	return this->number;
}

string Card::cardInfo()
{
	string number = to_string(this->number);
	string cardInfo = "Color:" + this->color + " Number:" + number;
	return cardInfo;
}
