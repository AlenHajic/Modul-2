#include "Rectangle.h"
#include <iostream>
#include <string>
using namespace std;

void writeAllCircumferences(Rectangle array[], int nrOfObjects);
void halfAllRectangles(Rectangle array[], int nrOfObjects);
void doubleSidesOfRectangle(Rectangle& circle);
void expandDynamicArray(Rectangle*& array, int nrOfObjects, int& currentCapacity);

int main()
{
	//Rectangle array[3];
	////Tillse därefter att objektet på index 0 har sidor med längd 12 och 15, objektet på index 1 och sidor med längd 10 och 5 samt att objekter på index 3 sidor med längden 2 och 25.//
	//array[0] = Rectangle(12, 15);
	//array[1] = Rectangle(10, 5);
	//array[2] = Rectangle(2, 25);

	Rectangle* array = new Rectangle[3];
	array[0] = Rectangle(12, 15);
	array[1] = Rectangle(10, 5);
	array[2] = Rectangle(2, 25);

	/*int nrOfObjects = sizeof(array) / sizeof(array[0]);*/
	int nrOfObjects = 3;
	int currentCapacity = 3;

	/*writeAllCircumferences(array, nrOfObjects);
	halfAllRectangles(array, nrOfObjects);
	doubleSidesOfRectangle(array[0]);*/
	expandDynamicArray(array, nrOfObjects, currentCapacity);

	delete[] array;

	return 0;
}

void writeAllCircumferences(Rectangle array[], int nrOfObjects)
{
	cout << "Omkretser: " << endl;
	for (int i = 0; i < nrOfObjects; i++)
	{
		cout << array[i].circumference() << endl;
	}

	cout << "Areor: " << endl;
	for (int i = 0; i < nrOfObjects; i++)
	{
		cout << array[i].area() << endl;
	}
}

void halfAllRectangles(Rectangle array[], int nrOfObjects)
{
	cout << "halfed widthes:" << endl;
	float temp = 0;
	for (int i = 0; i < nrOfObjects; i++)
	{
		temp = array[i].getWidth();
		array[i].setWidth(temp / 2);
		cout << array[i].getWidth() << endl;
	}
	
	cout << "halfed heightes:" << endl;
	for (int i = 0; i < nrOfObjects; i++)
	{
		temp = array[i].getHeight();
		array[i].setHeight(temp / 2);
		cout << array[i].getHeight() << endl;
	}

}

void doubleSidesOfRectangle(Rectangle& circle)
{
	cout << "doubled height" << endl;
	float temp = circle.getHeight() * 2;
	temp = temp * 2;
	circle.setHeight(temp);
	cout << circle.getHeight() << endl;

	cout << "dubled width" << endl;
	temp = circle.getWidth() * 2;
	temp = temp * 2;
	circle.setWidth(temp);
	cout << circle.getWidth() << endl;
}

void expandDynamicArray(Rectangle*& array, int nrOfObjects, int& currentCapacity)
{
	int newCapacity = currentCapacity * 2;
	Rectangle* temp = new Rectangle[newCapacity];
	for (int i = 0; i < nrOfObjects; i++)
	{
		temp[i] = array[i];
	}
	delete[] array;
	array = temp;
	currentCapacity = newCapacity;

	for (int i = 0; i < nrOfObjects; i++)
	{
		cout << "Rectangle: " << i << endl;
		cout << array[i].getHeight() << endl;
		cout << array[i].getWidth() << endl;
	}
}

