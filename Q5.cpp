#include<iostream>
#include<string> 
using namespace std;

class student {
public:
    int rollno;
    string name;
    float marks;

    
    void input() {
        cout << "enter rollno: ";
        cin >> rollno; 
        cout << "enter name: ";
        cin >> name;
        cout << "enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\n" << rollno << "\t" << name << "\t" << marks;
    }
};

int main() {
    student s[10]; 

    cout << "enter details of 10 students:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "student<" << i + 1 << ">" << endl;
        s[i].input(); 
        cout << endl;
    }

    cout << "\nthe details of students are as follows:" << endl;
    cout << "rollno\tname\tmarks"; 

    for (int i = 0; i < 10; i++) {
        s[i].display(); 
    }

    
    cout << endl; 

    return 0;
}