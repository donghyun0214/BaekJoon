#include <iostream>

using namespace std;

void static_local_increment() {
    static int num = 1;
    cout << "num : " << num << endl;
    num++;
    cout << "num : " << num << endl;
}

int main() {
    static_local_increment();
    static_local_increment();
    static_local_increment();
    
    return 0;
}