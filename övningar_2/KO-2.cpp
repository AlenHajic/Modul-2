#include "ToyCar.h"
using namespace std;

int main()
{
	ToyCar myToyCar;
	ToyCar yourToyCar("Red", "Golf");
	cout << "My Toy Car" << endl;
	cout << "Model: " << myToyCar.getModel() << endl;
	cout << "Color: " << myToyCar.getColor() << endl << endl;
	cout << "Your Toy Car" << endl;
	cout << "Model: " << yourToyCar.getModel() << endl;
	cout << "Color: " << yourToyCar.getColor() << endl << endl;
	string color = myToyCar.getColor();
	myToyCar.setColor("Yellow");
	yourToyCar.setColor(color);
	cout << "The color of my Toy Car is " << myToyCar.getColor() << endl;
	cout << "The color of your Toy Car is " << yourToyCar.getColor() << endl;
	cout << endl << "The cars are " << endl;
	cout << myToyCar.toString() << endl << yourToyCar.toString() << endl;
	getchar();
	return 0;
}