#include "Member.h"

Member::Member(const string& name, const string& adress, const int& phoneNumber) : name(name), adress(adress), phoneNumber(phoneNumber)
{
}

string Member::toString()
{
	string memeberInfo = "Name:" + this->name + " Adress:" + this->adress + "Phonenumber:" + to_string(this->phoneNumber);
	return memeberInfo;
}

string Member::getName()
{
	return this->name;
}

bool Member::operator==(const Member& other) const
{
	return this->name == other.name;
}
