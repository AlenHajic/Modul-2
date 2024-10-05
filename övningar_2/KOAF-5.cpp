#include "TipRow.h"
using namespace std;

void fillAllTeams(TipRow*& listOfTips, int nrOf);
void fillAllTippings(TipRow*& listOfTips, int nrOf);
void showAllTippings(TipRow*& listOfTips, int nrOf);
void putIntoTextFile(TipRow*& listOfTips, int nrOf);

int main()
{
	int nrOf = 0;
	cout << "How many tips do you want to do?" << endl;
	cin >> nrOf;

	TipRow* listOfTips = new TipRow[nrOf];

	fillAllTeams(listOfTips, nrOf);
	fillAllTippings(listOfTips, nrOf);
	showAllTippings(listOfTips, nrOf);
	putIntoTextFile(listOfTips, nrOf);
	
	delete[] listOfTips;

	return 0;
}

void fillAllTeams(TipRow*& listOfTips, int nrOf)
{
	string currentHome;
	string currentAway;
	for (int i = 0; i < nrOf; i++)
	{
		cout << "What team for home?" << endl;
		cin >> currentHome;
		cout << "What team for away?" << endl;
		cin >> currentAway;

		listOfTips[i] = TipRow(currentHome, currentAway);
		/*cout << listOfTips[i].toString() << endl;*/
	}

}

void fillAllTippings(TipRow*& listOfTips, int nrOf)
{
	string currentTippat;
	for (int i = 0; i < nrOf; i++)
	{
		cout << "Your tip (1, X, 2)?" << endl;
		cin >> currentTippat;
		listOfTips[i].setTip(currentTippat);
	}
}

void showAllTippings(TipRow*& listOfTips, int nrOf)
{
	for (int i = 0; i < nrOf; i++)
	{
		cout << listOfTips[i].toString() << endl;
	}
}

void putIntoTextFile(TipRow*& listOfTips, int nrOf)
{
	string name;
	cout << "What is your name?" << endl;
	cin >> name;
	ofstream output_file(name);
	for (int i = 0; i < nrOf; i++)
	{
		output_file << listOfTips[i].toString() << endl;
	}

	output_file.close();
}
