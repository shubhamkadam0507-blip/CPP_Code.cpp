// write a c++ program using class to check if a number is prime o not

#include <iostream>

using namespace std;

class PrimeChecker {
public:
    int number;

public:
    
    PrimeChecker(int n){
        number = n;
    }

    bool isPrime() {
        if (number <= 1) {
            return false;
        }

        for (int i = 2; i * i <= number; ++i) {
            if (number % i == 0) {
                return false;
            }
        }

        return true; 
    }
};

int main() {
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

    PrimeChecker pc(num);

    if (pc.isPrime()) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
