#include <iostream>

using namespace std;

int* dont_do_this() {
    int num = 10;
    int* num_ptr = &num;

    return num_ptr;
}

int main() {
    int* a = nullptr;
    a = dont_do_this();
    cout << *a << endl;
    return 0;
}