#include "Date.h"

Date::Date(const string& year, const string& month, const string& day) : year(year), month(month), day(day)
{
}

void Date::setNewDate(const string& year, const string& month, const string& day)
{
	this->year = year;
	this->month = month;
	this->day = day;
}

string Date::getDate()
{
	string fullDate = "Year:" + this->year + " Month:" + this->month + " Day:" + this->day;
	return fullDate;
}
