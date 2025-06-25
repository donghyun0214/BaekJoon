#include <iostream>
#include <string>
using namespace std;

int main() {
    int sum = 0; 
    int num;
    string digit;
    cin >> num;
    cin >> digit;

    for(int i=0;i<num;i++)
        sum += digit.at(i) - '0';

    cout << sum << endl;
    return 0;
}