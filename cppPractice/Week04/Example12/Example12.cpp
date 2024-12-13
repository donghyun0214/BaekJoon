#include <iostream>

using namespace std;

int* largest_int(int* int_ptr1, int* int_ptr2) {
    if(*int_ptr1 > *int_ptr2)
        return int_ptr1;
    else return int_ptr2;
}

int main() {
    return 0;
}