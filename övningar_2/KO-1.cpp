#include "Rectangle.h"
#include <iostream>;
using namespace std;

int main()
{
	Rectangle a1;
	a1.setWidth(10);

	cout << a1.circumference() << endl;

	a1.setHeight(10);

	cout << a1.area() << endl;

	Rectangle a2(10, 10);

	cout << a2.circumference() << endl;

	a2.setHeight(30);

	cout << a2.circumference() << endl;
}