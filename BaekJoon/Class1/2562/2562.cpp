#include <iostream>

using namespace std;

int main() {
    int size = 9;
    int arr[size];
    for (int i=0;i<size;i++)
        cin >> arr[i];
    int max = arr[0];
    int idx = 0;
    for(int i=1;i<size;i++) {
        if(max < arr[i]) {
            max = arr[i];
            idx = i;
        }
    }
    cout << max << "\n";
    cout << idx + 1;
    return 0;
}