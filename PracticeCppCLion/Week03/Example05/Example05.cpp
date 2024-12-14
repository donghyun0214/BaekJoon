#include <iostream>

using namespace std;

void param_test(int formal) {
    cout << formal << endl;
    formal = 100;
    cout << formal << endl;
}

int main() {
    int actual = 50;
    cout << actual << endl;
    param_test(actual);
    cout << actual << endl;
    return 0;
}