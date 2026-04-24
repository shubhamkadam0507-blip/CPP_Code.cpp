
class Bank {
public:
    virtual void interest() {
        cout << "Bank interest\n";
    }
};

class SBI : public Bank {
public:
    void interest() {
        cout << "SBI interest: 6%\n";
    }
};

class HDFC : public Bank {
public:
    void interest() {
        cout << "HDFC interest: 7%\n";
    }
};
//b
template <typename T>
T modulus(T a, T b) {
    if (b == 0)
        throw "Division by zero!";
    return a % b;
}