#include <iostream>

using namespace std;

int main() {
    int score = 10;
    int* score_ptr = &score;

    cout << *score_ptr << endl;
    *score_ptr = 20;
    cout << *score_ptr << endl;
    cout << score << endl;
    return 0;
}