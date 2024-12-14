#include <iostream>

using namespace std;

int main() {
    int* p1 = nullptr;
    double* p2 = nullptr;
    unsigned long long* p3 = nullptr;
    vector<string>* p4 = nullptr;
    string* p5 = nullptr;

    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;
    
    return 0;
}