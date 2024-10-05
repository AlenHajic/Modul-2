#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;

class student
{
private:
	string name;
	string phonenumber;
	string major;
public:
	student();
	student(string name, string phonenumber, string major);
	void setName(string name);
	void setPhoneNumber(string phonenumber);
	void setMajor(string Major);
	string getName();
	string getPhoneNumber();
	string getMajor();
	string toString();
};

#endif // !STUDENT_H

