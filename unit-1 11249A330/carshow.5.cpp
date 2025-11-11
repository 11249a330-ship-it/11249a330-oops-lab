#include <iostream>
#include <iomanip>
using namespace std;

class Car {
private:
    string brand;
    string model;
    double price;
    double mileage; // km/l

public:
    // Input car details
    void input() {
        cout << "Enter Car Brand: ";
        cin.ignore();
        getline(cin, brand);
        cout << "Enter Model: ";
        getline(cin, model);
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Mileage (km/l): ";
        cin >> mileage;
    }

    // Display car details
    void display() {
        cout << fixed << setprecision(2);
        cout << "\n------ CAR DETAILS ------\n";
        cout << "Brand   : " << brand << endl;
        cout << "Model   : " << model << endl;
        cout << "Price   : Rs. " << price << endl;
        cout << "Mileage : " << mileage << " km/l" << endl;
        cout << "-------------------------\n";
    }

    string getBrand() {
        return brand;
    }

    double getPrice() {
        return price;
    }
};
return 0;

