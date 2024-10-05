#include "Student.h"
using namespace std;

int main()
{
	student alen("alen", "0737824513", "PAAST23H");
	cout << alen.getName() << endl;
	cout << alen.getMajor() << endl;
	cout << alen.getPhoneNumber() << endl;
	cout << alen.toString() << endl;
	
	alen.setMajor("BESHAHHOE");

	cout << alen.toString() << endl;

	student ok;
	cout << ok.toString() << endl;
	ok.setPhoneNumber("0736924201");
	cout << ok.getPhoneNumber() << endl;
	cout << ok.toString() << endl;

}