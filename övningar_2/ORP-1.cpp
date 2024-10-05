#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
	Circle* circ1;
	Circle* circ2;
	Circle* circ3;

	circ1 = new Circle(10);
	circ2 = new Circle(10);
	circ3 = new Circle(25.5);

	if (*circ1 == *circ2)
	{
		cout << "true" << endl;
	}
	else if(*circ1 != *circ2)
	{
		cout << "false" << endl;
	}

	if (*circ1 == *circ3)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	
	circ1->setRadius(circ3->getRadius());
	circ3->setRadius(circ2->getRadius());
	circ2->setRadius(circ1->getRadius());
	cout << circ2->getRadius() << " " << circ3->getRadius() << endl;
	

	delete circ1;
	delete circ2;
	delete circ3;

	


}