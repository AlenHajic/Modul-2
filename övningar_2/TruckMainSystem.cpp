#include "TruckMainSystem.h"

void TruckMainSystem::expand() {
    capacity *= 2;
    Truck** newTrucks = new Truck*[capacity];
    for (int i = 0; i < amountOfTrucks; ++i) {
        newTrucks[i] = Trucks[i];
    }
    delete[] Trucks;
    Trucks = newTrucks;
}

TruckMainSystem::TruckMainSystem(int initialCap) : amountOfTrucks(0), capacity(initialCap)
{
	Trucks = new Truck*[initialCap];
}

TruckMainSystem::~TruckMainSystem()
{
	for (int i = 0; i < amountOfTrucks; i++)
	{
		delete Trucks[i];
	}
	delete[] Trucks;
}

Truck* TruckMainSystem::createTruck(const string& regNumber)
{
	if (amountOfTrucks == capacity) expand();

	Truck* truck = new Truck(regNumber);
	Trucks[amountOfTrucks++] = truck;
	return truck;
}

void TruckMainSystem::listAllTrucks()
{
	for (int i = 0; i < amountOfTrucks; i++)
	{
		cout << Trucks[i]->toString() << endl;
	}
}
