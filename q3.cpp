class Animal {
public:
    virtual void sound() {
        cout << "Animal sound\n";
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks\n";
    }
};

class Cat : public Animal {
public:
    void sound() {
        cout << "Cat meows\n";
    }
};
//add
template <typename T>
T add(T a, T b) {
    T sum = a + b;
    if (sum > 100)
        throw "Sum exceeds 100!";
    return sum;
}