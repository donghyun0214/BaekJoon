#include <iostream>

using namespace std;

int main() {
    int scores[] = {100, 95, 90};
    int* scores_ptr = scores;

    cout << scores_ptr << endl;
    cout << (scores_ptr + 1) << endl; // == scores_ptr + 1 * sizeof(int)
    cout << (scores_ptr + 2) << endl;

    cout << *scores_ptr << endl;
    cout << *(scores_ptr + 1) << endl;
    cout << *(scores_ptr + 2) << endl;

    return 0;
}