#include <iostream>
#include <iomanip> // for setprecision
using namespace std;

class ElectricityBill {
private:
    int consumerNo;
    string consumerName;
    double units;
    double totalAmount;

public:
    // Function to take input
    void input() {
        cout << "Enter Consumer Number: ";
        cin >> consumerNo;
        cout << "Enter Consumer Name: ";
        cin.ignore(); // To clear newline character
        getline(cin, consumerName);
        cout << "Enter Units Consumed: ";
        cin >> units;
    }

    // Function to calculate total amount
    void calculateBill() {
        if (units <= 100)
            totalAmount = units * 1.20;
        else if (units <= 200)
            totalAmount = (100 * 1.20) + (units - 100) * 2.00;
        else if (units <= 300)
            totalAmount = (100 * 1.20) + (100 * 2.00) + (units - 200) * 3.00;
        else
            totalAmount = (100 * 1.20) + (100 * 2.00) + (100 * 3.00) + (units - 300) * 5.00;
    }

    // Function to display the bill
    void displayBill() {
        cout << fixed << setprecision(2);
        cout << "\n------ ELECTRICITY BILL ------\n";
        cout << "Consumer No   : " << consumerNo << endl;
        cout << "Consumer Name : " << consumerName << endl;
        cout << "Units Consumed: " << units << endl;
        cout << "Total Amount  : Rs. " << totalAmount << endl;
        cout << "-------------------------------\n";
    }
};

int main() {
    ElectricityBill e;

    e.input();
    e.calculateBill();
    e.displayBill();

    return 0;
}
