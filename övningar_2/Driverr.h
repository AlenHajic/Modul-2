#ifndef DRIVER_HPP
#define DRIVER_HPP
#include <string>
using namespace std;

class Driver
{
private:
	string name;
	string phoneNumber;
public:
	Driver(const string& name, const string& phoneNumber);
	string getName();
	void setName(const string& name);
	string getPhoneNumber();
	void setPhoneNumber(const string& phoneNumber);
};

#endif // !DRIVER_HPP

