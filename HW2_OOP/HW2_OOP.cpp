#include <iostream>
#include "Tour.h"
#include "TourAgency.h"
using namespace std;

int main() {
    TourAgency agency;

    Tour t1("Summer Paradise", "Spain, Barcelona", 1500.0, 7, "All inclusive", 300.0);
    Tour t2("Winter Alps", "Austria, Innsbruck", 2000.0, 5, "Breakfast", 450.0);
    Tour t3("Desert Safari", "UAE, Dubai", 1200.0, 4, "No meals", 550.0);
    Tour t4("Cultural Escape", "Italy, Rome", 1700.0, 6, "Half board", 400.0);

    agency.addTour(t1);
    agency.addTour(t2);
    agency.addTour(t3);
    agency.addTour(t4);

    cout << "=== All Tours ===\n";
    agency.showAllTours();

    cout << "\n=== Sorted by Destination ===\n";
    agency.sortByDestination();
    agency.showAllTours();

    cout << "\n=== Sorted by Transport Cost ===\n";
    agency.sortByTransportCost();
    agency.showAllTours();

    cout << "\n=== Search by Destination: 'Rome' ===\n";
    agency.searchByDestination("Rome");

    cout << "\n=== Delete Tour: 'Desert Safari' ===\n";
    agency.deleteTourByName("Desert Safari");

    cout << "\n=== All Tours After Deletion ===\n";
    agency.showAllTours();

    return 0;
}
