#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    int arr[number];
    for(int i=0;i<number;i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];
    for(int i=1;i<number;i++) {
        if(max < arr[i]) max = arr[i];
        if(min > arr[i]) min = arr[i];
    }
    cout << min << " " << max;
    return 0;
}