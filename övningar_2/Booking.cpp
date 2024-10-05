#include "Booking.h"

Booking::Booking(const string& name, const string cabin, Date* startDate, Date* endDate) : name(name), cabin(cabin), startDate(nullptr), endDate(nullptr)
{
}

Booking::~Booking()
{
	delete startDate;
	delete endDate;
}

void Booking::changeEndDate(Date* endDate)
{
	if(this->endDate != nullptr) delete this->endDate;
	this->endDate = endDate;
}

void Booking::checkCabinDate(Date* date)
{
	if (this->startDate->getDate() == date->getDate())
	{
		cout << "This date:" + date->getDate() + " is taken till:" + this->endDate;
	}
	else if (this->endDate->getDate() == date->getDate())
	{
		cout << "This date:" + date->getDate() + " is taken till:" + this->endDate;
	}
	else
	{
		cout << "This date is avalabile" << endl;
	}
}

string Booking::getBookingName()
{
	return this->name;
}

string Booking::toString()
{
	string fullBooking = "Name:" + this->name + "Cabin:" + this->cabin + "Startdate:" + this->startDate->getDate() + "Enddate:" + this->endDate->getDate();
}
