#ifndef MAINSYSTEM_HPP
#define MAINSYSTEM_HPP

#include "Association.h"
#include <string>
#include <iostream>
using namespace std;

class MainSystem {
private:
    Association** associations;
    int numberOfAssociations;
    int capacity;

    void expand();
public:
    MainSystem(int initialCap = 2);
    ~MainSystem();
    Association* createAssociation(const string& name, int startYear, Member* member1, Member* member2);
    void addMemberToAssociation(const string& associationName, Member* member);
    void listAssociations() const;
    void listMembersOfAssociation(const string& associationName) const;
};

#endif // MAINSYSTEM_HPP
