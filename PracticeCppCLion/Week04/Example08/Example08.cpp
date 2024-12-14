#include <iostream>

using namespace std;

int main() {
    int scores[] = {100, 95, 90};
    cout << scores << endl;
    cout << *(scores+1) << endl;

    int* score_ptr = scores;
    cout << score_ptr << endl;
    cout << *score_ptr << endl;

    cout << sizeof(scores) << endl;
    cout << sizeof(score_ptr) << endl;
    return 0;
}