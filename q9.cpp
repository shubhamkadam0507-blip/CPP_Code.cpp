class Account {
public:
    virtual void balance() {
        cout << "Account balance\n";
    }
};

class Saving : public Account {
public:
    void balance() {
        cout << "Saving balance: 10000\n";
    }
};

class Current : public Account {
public:
    void balance() {
        cout << "Current balance: 20000\n";
    }
};
//b
template <typename T>
T divide(T a, T b) {
    if (b == 0)
        throw "Division by zero!";
    return a / b;
}