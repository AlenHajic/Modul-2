#include "Circle.h"
#include <iostream>
using namespace std;

int main()
{
	Circle* circList[3] = {new Circle(10), new Circle(10), new Circle(25.5)};

	if (*circList[0] == *circList[1])
	{
		cout << "true" << endl;
	}
	else if (*circList[0] != *circList[1])
	{
		cout << "false" << endl;
	}

	if (*circList[0] == *circList[2])
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}

	circList[0]->setRadius(circList[2]->getRadius());
	circList[2]->setRadius(circList[1]->getRadius());
	circList[1]->setRadius(circList[0]->getRadius());
	cout << circList[1]->getRadius() << " " << circList[2]->getRadius() << endl;


	delete circList[0];
	delete circList[1];
	delete circList[2];

	return 0;
}