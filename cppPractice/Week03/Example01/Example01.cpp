#include <iostream>

using namespace std;

void print_hello() {
    cout << "Hello" << endl;
}


int main() {
    for (int i=0;i<10;i++) print_hello();
    return 0;
}