#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    for(int i=1;i<number;i++) {
        int k = i;
        int sum = 0;
        while(k != 0) {
            sum += (k % 10);
            k /= 10;
        }
        sum += i;
        if(sum == number) {
            cout << i;
            return 0;
        }
    }
    cout << "0";
    
    return 0;
}