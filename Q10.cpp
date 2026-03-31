// Write a program to check if the number is palindrome or not using the inline
// member Function.

#include <iostream>

class PalindromeChecker {
private:
    int original_num;

public:
    // Constructor to initialize the number
    PalindromeChecker(int num) : original_num(num) {}

    // Inline member function definition inside the class
    bool isPalindromeInline() {
        int n = original_num;
        int reversed_num = 0;
        int remainder;

        while (n != 0) {
            remainder = n % 10;           // Get the last digit
            reversed_num = reversed_num * 10 + remainder; // Add to reversed number
            n /= 10;                      // Remove the last digit
        }
  
        // Check if the original number is equal to the reversed number
        return original_num == reversed_num;
    }
};

int main() {
    int input_number;

    std::cout << "Enter a number: ";
    std::cin >> input_number;

    // Create an object of the class
    PalindromeChecker pc(input_number);

    // Call the inline member function
    if (pc.isPalindromeInline()) {
        std::cout << input_number << " is a palindrome number." << std::endl;
    } else {
        std::cout << input_number << " is not a palindrome number." << std::endl;
    }

    return 0;
}