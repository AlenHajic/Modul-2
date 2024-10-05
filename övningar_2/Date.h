#ifndef DATE_HPP
#define DATE_HPP
#include <iostream>
#include <string>
using namespace std;
class Date
{
private:
	string year;
	string month;
	string day;
public:
	Date(const string& year, const string& month, const string& day);
	void setNewDate(const string& year, const string& month, const string& day);
	string getDate();
};

#endif // !



