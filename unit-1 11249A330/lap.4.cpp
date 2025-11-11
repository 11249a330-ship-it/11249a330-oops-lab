#include <iostream>
#include <iomanip>
using namespace std;

class Laptop {
private:
    string brand;
    string model;
    double price;
    string processor;
    int ram; // in GB

public:
    // Function to input laptop details
    void input() {
        cout << "Enter Brand Name: ";
        cin.ignore();
        getline(cin, brand);
        cout << "Enter Model: ";
        getline(cin, model);
        cout << "Enter Price: ";
        cin >> price;
        cin.ignore();
        cout << "Enter Processor: ";
        getline(cin, processor);
        cout << "Enter RAM (GB): ";
        cin >> ram;
    }

    // Function to display laptop details
    void display() {
        cout << fixed << setprecision(2);
        cout << "\n------ LAPTOP DETAILS ------\n";
        cout << "Brand      : " << brand << endl;
        cout << "Model      : " << model << endl;
        cout << "Price      : Rs. " << price << endl;
        cout << "Processor  : " << processor << endl;
        cout << "RAM        : " << ram << " GB" << endl;
        cout << "----------------------------\n";
    }
};

int main() {
    int n;
    cout << "Enter number of laptops: ";
    cin >> n;

    Laptop laptops[n]; // Array of Laptop objects

    // Input details for all laptops
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Laptop " << i + 1 << ":\n";
        laptops[i].input();
    }

    // Display details of all laptops
    for (int i = 0; i < n; i++) {
        cout << "\nLaptop " << i + 1 << ":";
        laptops[i].display();
    }
    return 0;
}
