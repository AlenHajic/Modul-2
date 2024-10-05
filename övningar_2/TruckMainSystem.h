#ifndef TRUCKMAINSYSTEM_HPP
#define TRUCKMAINSYSTEM_HPP
#include "Truck.h"
#include <string>
#include <iostream>

class TruckMainSystem
{
private:
	Truck** Trucks;
	int amountOfTrucks;
	int capacity;

	void expand();
public:
	TruckMainSystem(int initialCap = 2);
	~TruckMainSystem();
	Truck* createTruck(const string& regNumber);
	void listAllTrucks();

};

#endif // !TRUCKMAINSYSTEM_HPP
