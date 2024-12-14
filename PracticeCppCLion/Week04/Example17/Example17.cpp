#include <iostream>

using namespace std;

void Increment(int val) {
    val++;
}

void IncrementByReference(int& val) {
    val++;
}

int main() {
    int a = 5;
    Increment(a);
    cout << a << endl;

    IncrementByReference(a);
    cout << a << endl;
    return 0;
}