#include <iostream>
#include "ShotPut.h"

using namespace std;

int main() {
    // Create a ShotPut instance with the name "John" and capacity for 5 shots
    ShotPut john("John", 5);

    // Add results to John's shots
    john.addResult(10.5);
    john.addResult(12.3);
    john.addResult(9.8);

    // Display results for John
    cout << "ShotPut instance: " << john.getName() << endl;
    cout << "Number of made shots: " << john.getNrOfMadeShots() << endl;

    float results[5];
    john.getResults(results);
    cout << "Results: ";
    for (int i = 0; i < john.getNrOfMadeShots(); ++i) {
        cout << results[i] << " ";
    }
    cout << endl;

    cout << "Best result: " << john.getBestResult() << endl;

    // Test copy constructor
    ShotPut jane = john; // Use copy constructor

    // Display results for Jane
    cout << "ShotPut instance (copied): " << jane.getName() << endl;
    cout << "Number of made shots: " << jane.getNrOfMadeShots() << endl;

    jane.getResults(results);
    cout << "Results: ";
    for (int i = 0; i < jane.getNrOfMadeShots(); ++i) {
        cout << results[i] << " ";
    }
    cout << endl;

    cout << "Best result: " << jane.getBestResult() << endl;

    // Test assignment operator
    ShotPut jack("Jack", 3);
    jack.addResult(7.5);
    jack.addResult(8.2);

    cout << "ShotPut instance before assignment: " << jack.getName() << endl;
    cout << "Number of made shots: " << jack.getNrOfMadeShots() << endl;

    jack.getResults(results);
    cout << "Results: ";
    for (int i = 0; i < jack.getNrOfMadeShots(); ++i) {
        cout << results[i] << " ";
    }
    cout << endl;

    // Assign john to jack
    jack = john; // Use assignment operator

    // Display results for Jack after assignment
    cout << "ShotPut instance after assignment: " << jack.getName() << endl;
    cout << "Number of made shots: " << jack.getNrOfMadeShots() << endl;

    jack.getResults(results);
    cout << "Results: ";
    for (int i = 0; i < jack.getNrOfMadeShots(); ++i) {
        cout << results[i] << " ";
    }
    cout << endl;

    cout << "Best result: " << jack.getBestResult() << endl;

    return 0;
}
