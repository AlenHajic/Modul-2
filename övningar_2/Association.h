#ifndef ASSOCIATION_HPP
#define ASSOCIATION_HPP

#include "Member.h"
#include <string>
using namespace std;

class Association {
private:
    string name;
    int startYear;
    Member* members[12]; // Fixed array to hold up to 12 members
    int numberOfMembers;
public:
    Association(const string& name, int startYear, Member* member1, Member* member2);
    ~Association();
    string getName() const;
    int getStartYear() const;
    int getNumberOfMembers() const;
    void getMemberNames(string* namesArray) const;
    bool isMember(const string& name) const;
    bool addMember(Member* member);
};

#endif // ASSOCIATION_HPP
