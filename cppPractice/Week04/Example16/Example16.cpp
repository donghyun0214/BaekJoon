#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int& b = a; // 참조자는 변수의 별명!

    b = 20;
    cout << a << endl;
    cout << b << endl;
    return 0;
}