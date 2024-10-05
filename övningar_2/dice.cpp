#include "dice.h"

Dice::Dice() : nrOfFaces(nrOfFaces), currentValue(1)
{
}

Dice::~Dice()
{
}

int Dice::getCurrentValue()
{
    return this->currentValue;
}

void Dice::roll()
{
    srand(time(NULL));
    this->currentValue = rand() % 7;
}

bool Dice::operator==(Dice& other) const
{
    return this->currentValue == other.currentValue;
}

bool Dice::operator!=(Dice& other) const
{
    return !(*this == other);
}

bool Dice::operator<=(Dice& other) const
{
    return this->currentValue <= other.currentValue;
}

bool Dice::operator>=(Dice& other) const
{
    return this->currentValue >= other.currentValue;
}
