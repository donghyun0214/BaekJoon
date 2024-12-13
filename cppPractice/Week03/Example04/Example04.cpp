#include <iostream>

using namespace std;

void sayHello(int val);

int main() {
    sayHello(100);
    return 0;
}

void sayHello(int val) {
    cout << "Hello " << val << endl;
}