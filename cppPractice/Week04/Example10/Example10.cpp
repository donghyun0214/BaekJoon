#include <iostream>

using namespace std;

int main() {
    int high_score = 100;
    int low_score = 60;
    const int* score_ptr1 = &high_score;
    int* const score_ptr2 = &high_score;
    const int* const score_ptr3 = &high_score;

    // *score_ptr1 = 80;
    score_ptr1 = &low_score;
    return 0;
}