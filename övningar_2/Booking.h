#ifndef BOOKING_HPP
#define BOOKING_HPP
#include "Date.h"
#include <string>

class Booking
{
private:
	string name;
	string cabin;
	Date* startDate;
	Date* endDate;
public:
	Booking(const string& name, const string cabin, Date* startDate, Date* endDate);
	~Booking();
	void changeEndDate(Date* endDate);
	void checkCabinDate(Date* date);
	string getBookingName();
	string toString();

};


#endif // !BOOKING_HPP
