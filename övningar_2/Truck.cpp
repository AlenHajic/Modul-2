#include "Truck.h"

Truck::Truck(const string regNumber) : regNumber(regNumber), driver(nullptr), kilometerDriven(0)
{
}

Truck::~Truck()
{
	delete driver;
}

void Truck::addKilometersDriven(int kilometersDriven)
{
	this->kilometerDriven += kilometerDriven;
}

void Truck::changeDriver(Driver* driver)
{
	if(this->driver != nullptr) delete this->driver;
	this->driver = driver;
}

string Truck::toString() {
	string driverInfo = (this->driver != nullptr) ? " Drivers name: " + this->driver->getName() + " Drivers phonenumber: " + this->driver->getPhoneNumber() : " No driver assigned";
	return "Regnummer: " + this->regNumber + " Antal körda kilometer: " + to_string(this->kilometerDriven) + driverInfo;
}
