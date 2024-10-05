#include "dog'.h"

Dog::Dog(std::string breed, std::string name, float height, bool vaccinated) : breed(breed), name(name), height(height), vaccinated(vaccinated)
{
}

Dog::~Dog()
{
}

void Dog::registerVaccination()
{
	this->vaccinated = true;
}

void Dog::setHeight(float height)
{
	this->height = height;
}

string Dog::getBreed() const
{
	return this->breed;
}

string Dog::getName() const
{
	return this->name;
}

bool Dog::operator==(Dog& other) const
{
	if (this->breed == other.breed && this->name == other.name && this->height == other.height && this->vaccinated == true)
	{
		return true;
	}
	return false;
}

bool Dog::operator!=(Dog& other) const
{
	return (*this == other);
}

bool Dog::operator<=(Dog& other) const
{
	return this->height <= other.height;
}

bool Dog::operator>=(Dog& other) const
{
	return this->height >= other.height;
}
