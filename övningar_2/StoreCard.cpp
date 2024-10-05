#include "StoreCard.h"

StoreCard::StoreCard() : balance(0), nameOfOwner("John doe"), cardNr("XXXXXXXXX")
{
}

StoreCard::StoreCard(float balance, string nameOfOwner, string cardNr) : balance(balance), nameOfOwner(nameOfOwner), cardNr(cardNr)
{
}

void StoreCard::deposit(float amount)
{
	this->balance += amount;
}

bool StoreCard::withdraw(float amount)
{
	if (amount > this->balance)
	{
		return false;
	}
	else
	{
		this->balance -= amount;
		return true;
	}
	
}

float StoreCard::getBalance()
{
	return this->balance;
}

string StoreCard::getNameOfOwner()
{
	return this->nameOfOwner;
}

string StoreCard::cardInfo()
{
	string balance = to_string(this->balance);
	string cardInfo = "Name: " + this->nameOfOwner + " Balance: " + balance + " Cardnumber: " + this->cardNr;
	return cardInfo;
}
