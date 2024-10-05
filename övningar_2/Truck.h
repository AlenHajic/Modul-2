#ifndef TRUCK_HPP
#define TRUCK_HPP
#include <string>
#include "Driverr.h"
using namespace std;

class Truck
{
private:
	string regNumber;
	int kilometerDriven;
	Driver* driver;
public:
	Truck(const string regNumber);
	~Truck();
	void addKilometersDriven(int kilometersDriven);
	void changeDriver(Driver* driver);
	string toString();
};

#endif // !TRUCK_HPP
