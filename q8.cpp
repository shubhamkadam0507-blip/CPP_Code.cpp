class Food {
public:
    virtual void type() {
        cout << "Food type\n";
    }
};

class Veg : public Food {
public:
    void type() {
        cout << "Vegetarian\n";
    }
};

class NonVeg : public Food {
public:
    void type() {
        cout << "Non-Vegetarian\n";
    }
};
//b
template <typename T>
T average(T a, T b) {
    if (a < 0 || b < 0)
        throw "Negative value!";
    return (a + b) / 2;
}