#include <iostream>
using namespace std;

int main() {
    int hour, minute;
    cin >> hour >> minute;
    if(minute >= 45) cout << hour << " " << minute - 45;
    else cout << (hour == 0 ? 23 : hour - 1) << " " << minute + 15;
    return 0;
}