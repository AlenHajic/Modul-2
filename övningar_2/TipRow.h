#ifndef TIPROW_HPP
#define TIPROW_HPP
#include <iostream>
#include <fstream>
using namespace std;


class TipRow
{
private:
	string tippat;
	string homeTeam;
	string awayTeam;
public:
	TipRow(string homeTeam, string awayTeam);
	TipRow();
	~TipRow();
	string getTip();
	void setTip(string tippat);
	string toString();

};



#endif