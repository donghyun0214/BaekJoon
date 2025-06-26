#include <iostream>
#include <string>
using namespace std;

int main() {
    int test, mul;
    string str, newStr;
    cin >> test;
    for(int i=0;i<test;i++) {
        cin >> mul >> str;

        newStr = "";
        for(int j=0;j<str.length();j++) {
            newStr += string(mul, str.at(j));
        }
        cout << newStr << "\n";
    }
    return 0;
}