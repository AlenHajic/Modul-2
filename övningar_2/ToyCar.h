#ifndef TOYCAR_H
#define TOYCAR_H
#include <string>
#include <iostream>
using namespace std;

class ToyCar
{
private:
	string color;
	string model;
public:
	ToyCar();
	ToyCar(string color, string model);
	void setColor(string color);
	string getColor();
	string getModel();
	string toString();

};


#endif // !TOYCAR_H
