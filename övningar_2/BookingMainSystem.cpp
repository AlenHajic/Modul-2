#include "BookingMainSystem.h"

void BookingMainSystem::expand()
{
	capacity *= 2;
	Booking** newBookingsList = new Booking*[capacity];
	for (int i = 0; i < amountOfBookings; i++)
	{
		newBookingsList[i] = this->Bookings[i];
	}
	delete[] this->Bookings;
	this->Bookings = newBookingsList;
}

BookingMainSystem::BookingMainSystem(int initialCap) : amountOfBookings(0), capacity(initialCap)
{
	this->Bookings = new Booking*[this->capacity];
}


BookingMainSystem::~BookingMainSystem()
{
	for (int i = 0; i < amountOfBookings; i++)
	{
		delete this->Bookings[i];
	}
	delete[] this->Bookings;
}

Booking* BookingMainSystem::createBooking(const string& name, const string cabin, Date* startDate, Date* endDate)
{
	if (amountOfBookings == this->capacity) expand();
	Booking* Booking = new Booking(name, cabin, startDate, endDate);
	Bookings[this->amountOfBookings++] = Booking;
	return Booking;
}

string BookingMainSystem::listOfAllBookings()
{
	return string();
}
