#include <iostream>
using namespace std;

int main() {
    int values[] = {1, 2, -1, 3, -1, -99, 7, 8, 9};
    for (int i=0;i<9;i++) {
        if (values[i] == -99) break;
        else if (values[i] == -1) continue;
        else cout << values[i] << endl;
    }

    return 0;
}