#include <iostream>
#include <string>
using namespace std;

int main() {
    int testCase, height, width, guest;
    cin >> testCase;

    for(int i=0;i<testCase;i++) {
        cin >> height >> width >> guest;

        int currentHeight = 100 * (guest % height == 0 ? height : guest % height);
        int currentWidth;
        if(guest % height == 0) currentWidth = guest / height;
        else currentWidth = guest / height + 1;
        cout << currentHeight + currentWidth << "\n";
    }
    return 0;
}