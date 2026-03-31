// Write a C++ program to calculate the electricity bill . And display the final bill
// with a 2% discount using member function.

#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

class ElectricityBill {
private:
    string customerName;
    int unitsConsumed;
    double ratePerUnit;
    double totalBill;
    double discountedBill;
    const double discountRate = 0.02;

public:  
    
    void getDetails() {
        cout << "Enter customer name: ";
        getline(cin, customerName);
        cout << "Enter units consumed: ";
        cin >> unitsConsumed;
        cout << "Enter rate per unit : ";
        cin >> ratePerUnit;
    }

    void calculateAndDisplayBill() {
        
        totalBill = unitsConsumed * ratePerUnit;
        
        double discountAmount = totalBill * discountRate;

        discountedBill = totalBill - discountAmount;

        cout << fixed << setprecision(2); // Format output to two decimal places
        cout << "\n--- Electricity Bill Details ---" << endl;
        cout << "Customer Name:   " << customerName << endl;
        cout << "Units Consumed:  " << unitsConsumed << " units" << endl;
        cout << "Rate per Unit:   $" << ratePerUnit << endl;
        cout << "Total Bill (before discount): $" << totalBill << endl;
        cout << "Discount Applied (2%):       $" << discountAmount << endl;
        cout << "Final Bill (after discount): $" << discountedBill << endl;
        cout << "--------------------------------\n" << endl;
    }
};

int main() {
    
    ElectricityBill bill;

    bill.getDetails();
    bill.calculateAndDisplayBill();

    return 0;
}