#include <iostream>
using namespace std;

int main() {
    int count = 1;
    int arr[10];
    int mod[10];
    int check[10];
    for(int i=0;i<10;i++) {
        cin >> arr[i];
    }
    for(int i=0;i<10;i++) {
        mod[i] = arr[i] % 42;
    }

    check[0] = mod[0];
    for(int i=1;i<10;i++) {
        bool isContain = false;
        for(int j=0;j<count;j++) {
            if(check[j] == mod[i]) {
                isContain = true;
                break;
            }
        }
        if(!isContain) {
            check[count] = mod[i];
            count++;
        }
    }
    cout << count;
    return 0;
}