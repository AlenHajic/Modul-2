#include "StoreCard.h";
using namespace std;

int main()
{
	StoreCard John_Doe;
	John_Doe.deposit(20);
	John_Doe.withdraw(10);
	cout << John_Doe.getBalance() << endl;
	cout << John_Doe.getNameOfOwner() << endl;
	cout << John_Doe.cardInfo() << endl;

	StoreCard Alen(110, "Alen hajic", "123420690");
	Alen.withdraw(100);
	if (Alen.withdraw(10))
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	
	cout << Alen.cardInfo() << endl;
}