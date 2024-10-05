#ifndef STORECARD_H
#define STORECARD_H
#include <iostream>
#include <string>
using namespace std;

class StoreCard
{
private: 
	float balance;
	string nameOfOwner;
	string cardNr;
public:
	StoreCard();
	StoreCard(float balance, string nameOfOwenr, string cardNr);
	void deposit(float amount);
	bool withdraw(float amount);
	float getBalance();
	string getNameOfOwner();
	string cardInfo();
};

#endif // !STORECARD_H

