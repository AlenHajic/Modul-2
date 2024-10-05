#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <string>
using namespace std;

class Card
{
private:
	string color;
	int number;
public:
	Card();
	Card(string color, int number);
	string getColor();
	int getNumber();
	string cardInfo();
};

#endif // !CARD_H

