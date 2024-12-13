#include <iostream>

using namespace std;

void scale_number(int& num);

int main() {
    int num = 1000;
    scale_number(num);
    cout << num << endl;
    return 0;
}

void scale_number(int& num) {
    if(num > 100)
        num = 100;
}