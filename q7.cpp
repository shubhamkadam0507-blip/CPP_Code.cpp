class Person {
public:
    virtual void role() {
        cout << "Person role\n";
    }
};

class Teacher : public Person {
public:
    void role() {
        cout << "Teacher\n";
    }
};

class Student2 : public Person {
public:
    void role() {
        cout << "Student\n";
    }
};
//b
template <typename T>
T cube(T num) {
    if (num == 0)
        throw "Zero not allowed!";
    return num * num * num;
}