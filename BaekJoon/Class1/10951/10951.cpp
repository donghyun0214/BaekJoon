#include <iostream>
using namespace std;

int main() {
    int first, second;
    for(int i=0;i<5;i++) {
        scanf("%d %d", &first, &second);
        printf("%d\n", first + second);
    }
    return 0;
}