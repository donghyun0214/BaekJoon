#include <iostream>
using namespace std;

int main() {
    int first, second;
    while(cin >> first >> second) {
        if(first == 0 && second == 0)
            return 0;
        printf("%d\n", first + second);
    }
    return 0;
}