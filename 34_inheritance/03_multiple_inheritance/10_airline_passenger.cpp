#include<iostream>
using namespace std;

class Airline {
public:
    string airlineName;
    void setAirline(string name) {
        airlineName = name;
    }
};

class Passenger {
public:
    string passengerName;
    void setPassenger(string name) {
        passengerName = name;
    }
};

class Booking : public Airline, public Passenger {
public:
    void showBooking() {
        cout << "Passenger: " << passengerName << ", Airline: " << airlineName << endl;
    }
};

int main() {
    Booking b;
    b.setPassenger("Zain");
    b.setAirline("PIA");
    b.showBooking();
    return 0;
}