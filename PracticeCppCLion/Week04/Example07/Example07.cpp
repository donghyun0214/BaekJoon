#include <iostream>

using namespace std;

int main() {
    int* array_ptr = nullptr;
    int size = 0;

    cout << "Szie of Array? : ";
    cin >> size;

    array_ptr = new int[size];

    array_ptr[0] = 10;
    array_ptr[1] = 20;
    array_ptr[2] = 30;

    delete [] array_ptr;
    array_ptr = nullptr;

    return 0;
}