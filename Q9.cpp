// Write a program using Class to check if a year is a leap year or not

#include <iostream>
using namespace std;

class YearChecker {
private:
    int year;

public:
    
    YearChecker(int y) : year(y) {}

    bool isLeap() {
        // Leap year condition:
        // Divisible by 4, but not by 100, OR divisible by 400
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    int inputYear;
  
    cout << "Enter a year: ";
    cin >> inputYear;

    YearChecker check(inputYear);

    if (check.isLeap()) {
        cout << inputYear << " is a leap year." << endl;
    } else {
        cout << inputYear << " is not a leap year." << endl;
    }

    return 0;
}