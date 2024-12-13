#include <iostream>
using namespace std;

int main() {
    int i = 0;
    for (;true;) {
        i++;
        if (i <= 5)
            cout << i << endl;
        else break;
    }

    return 0;
}