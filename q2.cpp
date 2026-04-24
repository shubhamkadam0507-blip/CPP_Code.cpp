class Vehicle {
public:
    virtual void showSpeed() {
        cout << "Vehicle speed\n";
    }
};

class Car : public Vehicle {
public:
    void showSpeed() {
        cout << "Car speed: 120 km/h\n";
    }
};

class Bike : public Vehicle {
public:
    void showSpeed() {
        cout << "Bike speed: 80 km/h\n";
    }
};
//substract
template <typename T>
T subtract(T a, T b) {
    T result = a - b;
    if (result < 0)
        throw "Negative result!";
    return result;
}