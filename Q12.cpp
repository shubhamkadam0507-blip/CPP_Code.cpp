// Write program to calculate medical bill of the person using constructor

#include <iostream>
#include <string>

// Define a class for the medical bill
class MedicalBill {
private:
    std::string patientName;
    double doctorFee;
    double labCharges;
    double pharmacyCharges;
    double totalBill;

public:
    // Constructor to initialize the bill details and calculate the total
    // It takes patient name and charges as parameters
    MedicalBill(std::string name, double doc, double lab, double pharmacy) {
        patientName = name;
        doctorFee = doc;
        labCharges = lab;
        pharmacyCharges = pharmacy;
        totalBill = doctorFee + labCharges + pharmacyCharges;
    }

    // A function to display the bill details
    void displayBill() {
        std::cout << "\n--- Medical Bill Details ---" << std::endl;
        std::cout << "Patient Name: " << patientName << std::endl;
        std::cout << "Doctor's Fee: $" << doctorFee << std::endl;
        std::cout << "Lab Charges:  $" << labCharges << std::endl;
        std::cout << "Pharmacy Charges: $" << pharmacyCharges << std::endl;
        std::cout << "--------------------------" << std::endl;
        std::cout << "Total Bill:   $" << totalBill << std::endl;
        std::cout << "--------------------------" << std::endl;
    }
};

int main() {
    // Create an instance of MedicalBill using the constructor
    // This automatically calculates the total bill upon creation
    MedicalBill bill1("John Doe", 200.00, 150.75, 45.50);

    // Display the calculated bill
    bill1.displayBill();

    return 0;
}