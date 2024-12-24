#include <iostream>

using namespace std;

class Base {
private:
    int value;

public:
    Base() : value{0} {cout << "Base no-args constructor" << endl;}

    Base(int x) : value{x} {cout << "Base (int) overloaded constructor" << endl;}

    Base(const Base& other) : value{other.value} {}

    ~Base() {cout << "Base destructor" << endl;}
};

class Derived : public Base {
private:
    int doubled_value;

public:
    Derived() : Base{}, doubled_value{0} {cout << "Derived no-args constructor" << endl;}

    Derived(int val) : Base{ val }, doubled_value{val * 2} {
        cout << "Derived (int) overloaded constructor" << endl;
    }

    Derived(const Derived& other) // Copy Constructor
        : Base{other}, doubled_value{other.doubled_value} {}

    ~Derived() {cout << "Derived destructor" << endl;}
};

int main() {
    Derived d1{100};
    Derived d2{d1};
    return 0;
}