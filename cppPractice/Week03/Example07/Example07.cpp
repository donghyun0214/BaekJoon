#include <iostream>

using namespace std;

// Prototype
int add_number(int, int);
double add_number(double, double);

int main() {
    cout << add_number(10, 20) << endl;
    cout << add_number(10.12, 20.23) << endl;
    return 0;
}

// Function
int add_number(int a, int b) {
    return a + b;
}

double add_number(double a, double b) {
    return a + b;
}