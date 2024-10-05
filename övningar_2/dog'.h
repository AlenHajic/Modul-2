#include <iostream>
using namespace std;

class Dog
{
private:
    std::string breed;
    std::string name;
    float height;
    bool vaccinated;
public:
    Dog(std::string breed, std::string name, float height = 0.0f, bool vaccinated = false);
    ~Dog();
    void registerVaccination();
    void setHeight(float height);
    string getBreed() const;
    string getName() const;

    bool operator==(Dog& other) const;
    bool operator!=(Dog& other) const;
    bool operator<=(Dog& other) const;
    bool operator>=(Dog& other) const;

};