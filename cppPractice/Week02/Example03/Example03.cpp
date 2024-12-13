#include <iostream>
using namespace std;


int main () {
    int a = 10;
    int b = 20;
    int result = 0;

    result = (a > b) ? a++ : b--;

    cout << result;

    return 0;
}