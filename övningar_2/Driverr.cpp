#include "Driverr.h"

Driver::Driver(const string& name, const string& phoneNumber) : name(name), phoneNumber(phoneNumber)
{
}

string Driver::getName()
{
	return this->name;
}

void Driver::setName(const string& name)
{
	this->name = name;
}

string Driver::getPhoneNumber()
{
	return this->phoneNumber;
}

void Driver::setPhoneNumber(const string& phoneNumber)
{
	this->phoneNumber = phoneNumber;
}
