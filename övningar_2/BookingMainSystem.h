#ifndef BOOKINGMAINSYSTEM_HPP
#define BOOKINGMAINSYSTEM_HPP
#include "Booking.h"
#include <string>

class BookingMainSystem
{
private:
	Booking** Bookings;
	int amountOfBookings;
	int capacity;

	void expand();
public:
	BookingMainSystem(int initialCap = 2);
	~BookingMainSystem();
	Booking* createBooking(const string& name, const string cabin, Date* startDate, Date* endDate);
	string listOfAllBookings();
};


#endif // !BOOKINGMAINSYSTEM_HPP

