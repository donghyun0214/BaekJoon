#include <iostream>

using namespace std;

int main() {
    int* val = new int;
    *val = 10;

    int* val2 = val;

    delete val2;
    val2 = nullptr;
    cout << *val << endl;    
    return 0;
}