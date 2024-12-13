#include <iostream>

using namespace std;

int main() {
    int* int_ptr = nullptr;
    int_ptr = new int;
    cout << int_ptr << endl;
    cout << *int_ptr << endl;

    *int_ptr = 100;
    cout << *int_ptr << endl;

    delete int_ptr;
    int_ptr = nullptr;
    
    return 0;
}