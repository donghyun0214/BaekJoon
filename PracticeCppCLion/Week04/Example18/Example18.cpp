#include <iostream>

using namespace std;

void PrintConstRef(const int& val) {
    cout << val << endl;
}

void PrintAddress(int* valPtr) {
    cout << *valPtr << endl;
}

void PrintRef(int& val) {
    cout << val << endl;
}

void PrintVal(int val) {
    cout << val << endl;
}

int main() {
    int a = 5;
    PrintVal(a);
    PrintRef(a);
    PrintConstRef(a);
    PrintAddress(&a);
    return 0;
}