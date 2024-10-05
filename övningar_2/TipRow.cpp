#include "TipRow.h"

TipRow::TipRow(string homeTeam, string awayTeam) : homeTeam(homeTeam), awayTeam(awayTeam)
{
	/*cout << "Your tip (1, X, 2)? X" << endl;
	cin >> this->tippat;*/
}

TipRow::TipRow() : homeTeam("unknown"), awayTeam("unknown"), tippat("empty")
{
}

TipRow::~TipRow()
{
}

string TipRow::getTip()
{
	return this->tippat;
}

void TipRow::setTip(string tippat)
{
	this->tippat = tippat;
}

string TipRow::toString()
{
	string final = "Home: " + this->homeTeam + " Away: " + this->awayTeam + " You tipped: " + this->tippat;
	return final;
}
