#include <iostream>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    long long mul = a * b * c;
    int arr[10] = {0};

    // string str = to_string(mul);
    while(mul) {
        int mod = mul % 10;
        arr[mod]++;
        mul /= 10;
    }
    
    for(auto idx : arr) {
        cout << idx << "\n";
    }
    return 0;
}