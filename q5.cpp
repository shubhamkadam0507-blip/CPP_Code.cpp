class Student {
public:
    virtual void display() {
        cout << "Student info\n";
    }
};

class UG : public Student {
public:
    void display() {
        cout << "Undergraduate student\n";
    }
};

class PG : public Student {
public:
    void display() {
        cout << "Postgraduate student\n";
    }
};
//b
template <typename T>
T maxVal(T a, T b) {
    if (a == b)
        throw "Values are equal!";
    return (a > b) ? a : b;
}