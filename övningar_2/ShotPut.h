#ifndef SHOTPUT_HPP
#define SHOTPUT_HPP
#include <string>
using namespace std;
class ShotPut
{
private:
    string name;
    int nrOfShots;
    int currentNrOfMadeShots;
    float* results;
public:
    ShotPut(string name, int nrOfShots = 5);
    ~ShotPut();
    ShotPut(const ShotPut& other);
    ShotPut& operator=(const ShotPut& other);
    string getName() const;
    void addResult(float theResult);
    float getBestResult() const;
    int getNrOfMadeShots() const;
    void getResults(float results[]); // fyller arrayen med de resultat som registrerats, f�ruts�tter att arrayen �r tillr�ckligt stor
};

#endif // !SHOTPUT_HPP
