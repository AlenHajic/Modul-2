#include "Association.h"
#include <iostream>

Association::Association(const string& name, int startYear, Member* member1, Member* member2)
    : name(name), startYear(startYear), numberOfMembers(2) {
    // Ensure the array is initialized
    for (int i = 0; i < 12; i++) {
        members[i] = nullptr;
    }
    members[0] = member1;
    members[1] = member2;
}

Association::~Association() {
    for (int i = 0; i < numberOfMembers; i++) {
        delete members[i];
    }
}

string Association::getName() const {
    return name;
}

int Association::getStartYear() const {
    return startYear;
}

int Association::getNumberOfMembers() const {
    return numberOfMembers;
}

void Association::getMemberNames(string* namesArray) const {
    for (int i = 0; i < numberOfMembers; i++) {
        cout << namesArray[i] << endl;
    }
}

bool Association::isMember(const string& name) const {
    for (int i = 0; i < numberOfMembers; i++) {
        if (members[i]->getName() == name) {
            return true;
        }
    }
    return false;
}

bool Association::addMember(Member* member) {
    if (numberOfMembers <= 12) {
        members[numberOfMembers++] = member;
        return true;
    }
    return false;
}
