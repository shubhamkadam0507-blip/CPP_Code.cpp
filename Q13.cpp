// Write a program using Class to display book details in a library. If a student
// wants to issue a book, write a condition about availability of a book.

#include <iostream>
#include <string>

// Define the Book class
class Book {
private:
    std::string title;
    std::string author;
    int id;
    bool isAvailable;

public:
    // Constructor to initialize a new book object
    Book(std::string t, std::string a, int bookId)
        : title(t), author(a), id(bookId), isAvailable(true) {}

    // Function to display book details
    void displayDetails() {
        std::cout << "--- Book Details ---" << std::endl;
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "ID: " << id << std::endl;
        std::cout << "Status: " << (isAvailable ? "Available" : "Issued") << std::endl;
        std::cout << "--------------------" << std::endl;
    }

    // Function to handle issuing a book (checks availability)
    void issueBook() {
        if (isAvailable) {
            isAvailable = false; // Mark as issued
            std::cout << "Success: The book \"" << title << "\" has been issued." << std::endl;
        } else {
            std::cout << "Sorry: The book \"" << title << "\" is currently unavailable." << std::endl;
        }
    }

    // Function to return a book
    void returnBook() {
        if (!isAvailable) {
            isAvailable = true; // Mark as available
            std::cout << "Success: The book \"" << title << "\" has been returned." << std::endl;
        } else {
            std::cout << "Error: This book was not issued in the first place." << std::endl;
        }
    }
};

int main() {
    // Create an instance (object) of the Book class
    Book book1("The C++ Programming Language", "Bjarne Stroustrup", 101);

    // Display initial details
    book1.displayDetails();

    // A student attempts to issue the book
    std::cout << "\nStudent attempts to issue the book:" << std::endl;
    book1.issueBook();

    // Display details again to show the status change
    std::cout << "\nDetails after issuing:" << std::endl;
    book1.displayDetails();

    // Another student tries to issue the same book immediately
    std::cout << "\nSecond student attempts to issue the book:" << std::endl;
    book1.issueBook();

    // The first student returns the book
    std::cout << "\nStudent returns the book:" << std::endl;
    book1.returnBook();

    // Now it's available again
    std::cout << "\nDetails after returning:" << std::endl;
    book1.displayDetails();

    return 0;
}