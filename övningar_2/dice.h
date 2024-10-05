#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Dice
{
private:
	int nrOfFaces;
	int currentValue;
public:
	Dice();
	~Dice();
	int getCurrentValue();
	void roll();
	bool operator==(Dice& other) const;
	bool operator!=(Dice& other) const;
	bool operator<=(Dice& other) const;
	bool operator>=(Dice& other) const;

};
