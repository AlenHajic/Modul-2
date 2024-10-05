#ifndef MEMBERS_HPP
#define MEMBERS_HPP
#include <string>
using namespace std;

class Member
{
private:
	string name;
	string adress;
	int phoneNumber;
public:
	Member(const string& name, const string& adress, const int& phoneNumber);
	string toString();
	string getName();
	bool operator==(const Member& other) const;

};

#endif // !1
