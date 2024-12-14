#include <iostream>

using namespace std;

int main() {
    int* p;
    cout << "Value : " << p << endl;
    cout << "Address : " << &p << endl;
    cout << "Size : " << sizeof(p) << endl;

    p = nullptr;
    cout << "Value : " << p << endl;

    return 0;
}