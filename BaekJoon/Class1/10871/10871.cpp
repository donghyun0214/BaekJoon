#include <iostream>
using namespace std;

int main() {
    int N, X;
    cin >> N;
    cin >> X;

    int A[N];
    for(int i=0;i<N;i++) {
        cin >> A[i];
    }
    for(auto idx : A) {
        if(idx < X) {
            cout << idx << " ";
        }
    }
    return 0;
}