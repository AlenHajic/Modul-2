#include "Student.h"

student::student() : name("unknown"), phonenumber("unknown"), major("unknown")
{
}

student::student(string name, string phonenumber, string major) : name(name), phonenumber(phonenumber), major(major)
{
}

void student::setName(string name)
{
	this->name = name;
}

void student::setPhoneNumber(string phonenumber)
{
	this->phonenumber = phonenumber;
}

void student::setMajor(string Major)
{
	this->major = Major;
}

string student::getName()
{
	return this->name;
}

string student::getPhoneNumber()
{
	return this->phonenumber;
}

string student::getMajor()
{
	return this->major;
}

string student::toString()
{
	string student = this->name;
	student += ", " + this->major + ", " + this->phonenumber;
	return student;
}
