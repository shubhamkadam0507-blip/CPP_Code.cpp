// Write a C++ program to Swap two numbers using class.

#include <iostream>
using namespace std;
class Swapper {
public:
    int num1, num2;

public:

    Swapper(int a, int b) {
        num1 = a;
        num2 = b;
    }

    void displayBefore() {
        cout << "Before Swap:" << endl;
        cout << "First number = " << num1 << endl;
        cout << "Second number = " << num2 << endl;
    }

    void swapNumbers() {
        int temp;
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    void displayAfter() {
        cout << "After Swap:" <<endl;
        cout << "First number = " << num1 << endl;
        cout << "Second number = " << num2 << endl;
    }
};

int main() {
    
    Swapper my_swap(5, 10);

    my_swap.displayBefore();
    my_swap.swapNumbers();
    my_swap.displayAfter();

    return 0;
}