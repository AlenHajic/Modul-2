#include "dice.h"
using namespace std;

int main()
{
	Dice dice1;
	Dice dice2;
	dice1.roll();
	cout << dice1.getCurrentValue() << endl;
	dice1.roll();
	cout << dice1.getCurrentValue() << endl;
	cout << dice2.getCurrentValue() << endl;
	if (dice1.getCurrentValue() == dice2.getCurrentValue())
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}

}