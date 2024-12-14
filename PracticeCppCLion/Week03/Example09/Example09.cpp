#include <iostream>

using namespace std;

int func2(int x, int y, int z) {
    x += y + z;
    return x;
}

int func1(int a, int b) {
    int result;
    result = a + b;
    result = func2(result, a, b);
    return result;
}

int main() {
    int x = 10;
    int y = 20;
    int z;
    z = func1(x, y);
    cout << z << endl;
    return 0;
}