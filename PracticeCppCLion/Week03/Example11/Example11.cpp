#include <iostream>

using namespace std;

void zero_array(int numbers [], int size) {
    for(int i=0;i<size;i++) 
        numbers[i] = 0;
}

void print_array(const int numbers[], int size) {
    for(int i=0;i<size;i++)
        cout << numbers[i] << endl;
}

int main() {
    int my_numbers[] = {1, 2, 3, 4, 5};
    zero_array(my_numbers, 5);
    print_array(my_numbers, 5);
    return 0;
}