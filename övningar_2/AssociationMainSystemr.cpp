#include "AssociationMainSystemr.h"

void MainSystem::expand() {
    capacity *= 2;
    Association** newAssociations = new Association * [capacity];
    for (int i = 0; i < numberOfAssociations; i++) {
        newAssociations[i] = associations[i];
    }
    delete[] associations;
    associations = newAssociations;
}

MainSystem::MainSystem(int initialCap) : numberOfAssociations(0), capacity(initialCap) {
    associations = new Association * [capacity];
}

MainSystem::~MainSystem() {
    for (int i = 0; i < numberOfAssociations; i++) {
        delete associations[i];
    }
    delete[] associations;
}

Association* MainSystem::createAssociation(const string& name, int startYear, Member* member1, Member* member2) {
    if (numberOfAssociations == capacity) {
        expand();
    }
    Association* association = new Association(name, startYear, member1, member2);
    associations[numberOfAssociations++] = association;
    return association;
}

void MainSystem::addMemberToAssociation(const string& associationName, Member* member) {
    for (int i = 0; i < numberOfAssociations; i++) {
        if (associations[i]->getName() == associationName) {
            if (!associations[i]->addMember(member)) {
                cout << "Cannot add member. The association has reached its maximum number of members." << endl;
                delete member;
            }
            return;
        }
    }
    cout << "Association not found." << endl;
    delete member; // Clean up if association not found
}

void MainSystem::listAssociations() const {
    for (int i = 0; i < numberOfAssociations; i++) {
        cout << "Association: " << associations[i]->getName() << " - Start Year: " << associations[i]->getStartYear() << endl;
    }
}

void MainSystem::listMembersOfAssociation(const string& associationName) const {
    for (int i = 0; i < numberOfAssociations; i++) {
        if (associations[i]->getName() == associationName) {
            cout << "Members of " << associationName << ":" << endl;
            string* memberNames = new string[associations[i]->getNumberOfMembers()];
            associations[i]->getMemberNames(memberNames);
            int numberOfMembers = associations[i]->getNumberOfMembers();
            for (int j = 0; j < numberOfMembers; j++) {
                cout << " - " << memberNames[j] << endl;
            }
            delete[] memberNames; // Clean up the names array
            return;
        }
    }
    cout << "Association not found." << endl;
}
