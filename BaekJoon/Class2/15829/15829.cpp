#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() {
    int length;
    long long mod = 1234567891;
    string str;

    cin >> length;
    cin >> str;

    unsigned long long sum = 0;
    unsigned long long r = 1;
    for(int i=0;i<str.length();i++) {
        sum = (sum + ((str.at(i) - 'a' + 1) * r)) % mod;
        r = (r * 31) % mod;
    }
    cout << sum;
    return 0;
}