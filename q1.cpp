#include <iostream>
using namespace std;

class Employee {
public:
    virtual void salary() {
        cout << "Employee salary\n";
    }
};

class Manager : public Employee {
public:
    void salary() {
        cout << "Manager salary: 50000\n";
    }
};

class Developer : public Employee {
public:
    void salary() {
        cout << "Developer salary: 40000\n";
    }
};

int main() {
    Employee *e;
    Manager m;
    Developer d;

    e = &m;
    e->salary();

    e = &d;
    e->salary();

    return 0;
}
//b
#include <iostream>
using namespace std;

template <typename T>
T multiply(T a, T b) {
    if (a < 0 || b < 0)
        throw "Negative value!";
    return a * b;
}

int main() {
    try {
        cout << multiply(2, 3) << endl;
        cout << multiply(2.5f, 3.0f) << endl;
    } catch (const char* msg) {
        cout << msg;
    }
}