#include <cmath>

class Shape3D {
public:
    virtual void volume() {
        cout << "Shape volume\n";
    }
};

class Cube : public Shape3D {
public:
    void volume() {
        cout << "Cube volume: " << 3*3*3 << endl;
    }
};

class Sphere : public Shape3D {
public:
    void volume() {
        cout << "Sphere volume: " << (4.0/3)*3.14*3*3*3 << endl;
    }
};
//b
#include <cmath>

template <typename T>
T power(T a, T b) {
    if (b < 0)
        throw "Negative exponent!";
    return pow(a, b);
}