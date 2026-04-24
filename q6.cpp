class Appliance {
public:
    virtual void power() {
        cout << "Appliance power\n";
    }
};

class Fan : public Appliance {
public:
    void power() {
        cout << "Fan power: 75W\n";
    }
};

class AC : public Appliance {
public:
    void power() {
        cout << "AC power: 1500W\n";
    }
};
//
template <typename T>
T minVal(T a, T b) {
    if (a < 0 && b < 0)
        throw "Both values negative!";
    return (a < b) ? a : b;
}