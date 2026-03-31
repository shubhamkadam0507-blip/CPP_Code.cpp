// Write a program to Print Numbers from 1 to n using class.

#include <iostream>
using namespace std;

class NumberPrinter {
private:
    int n;

public:
    NumberPrinter(int limit) : n(limit) {}

    void printNumbers() {
        if (n <= 0) {
            cout << "Please enter a positive number." <<endl;
            return;
        }

        cout << "Numbers from 1 to " << n << " are: ";
        for (int i = 1; i <= n; ++i) {
            cout << i << " ";
        }
        cout << endl;
    }
};

int main() {
    
    int limit = 10;

    NumberPrinter printer(limit);

    printer.printNumbers();

    return 0;
}
  