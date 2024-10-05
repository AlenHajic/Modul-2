#include "TruckMainSystem.h"

int main() {
    TruckMainSystem mainSystem;

    // Create the first truck
    Truck* truck1 = mainSystem.createTruck("ABC123");
    truck1->addKilometersDriven(150);
    truck1->changeDriver(new Driver("Johan Svensson", "0701234567"));


    // Create the second truck
    Truck* truck2 = mainSystem.createTruck("XYZ789");
    truck2->addKilometersDriven(300);
    truck2->changeDriver(new Driver("Anna Karlsson", "0709876543"));

    // List all trucks
    mainSystem.listAllTrucks();

    return 0;
}
