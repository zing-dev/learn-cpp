//
// Created by zing on 6/30/2020.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Vehicle {
private:
    string m_vehicleType;
    int m_totalOfWheel;

public:
    Vehicle(const string &type, int wheel);

    Vehicle();

    ~Vehicle();

    string GetType() const { return m_vehicleType; }

    int GetNumOfWheel() const { return m_totalOfWheel; }
};


// Constructor with default value for
// m_vehicleType and m_totalOfWheel
Vehicle::Vehicle() : m_totalOfWheel(0) {
}

// Constructor with user-defined value for
// m_vehicleType and m_totalOfWheel
Vehicle::Vehicle(
        const string &type,
        int wheel) :
        m_vehicleType(type),
        m_totalOfWheel(wheel) {
}

// Destructor
Vehicle::~Vehicle() {
}

auto main() -> int {
    cout << "[lambda_tiny_func.cpp]" << endl;

    // Initializing several Vehicle instances
    Vehicle car("car", 4);
    Vehicle motorcycle("motorcycle", 2);
    Vehicle bicycle("bicycle", 2);
    Vehicle bus("bus", 6);

    // Assigning the preceding Vehicle instances to a vector
    vector<Vehicle> vehicles = {car, motorcycle, bicycle, bus};

    // Displaying the elements of the vector
    // using Lambda expression
    cout << "All vehicles:" << endl;
    for_each(
            begin(vehicles),
            end(vehicles),
            [](const Vehicle &vehicle) {
                cout << vehicle.GetType() << " " << vehicle.GetNumOfWheel() << endl;
            });

    return 0;
}
