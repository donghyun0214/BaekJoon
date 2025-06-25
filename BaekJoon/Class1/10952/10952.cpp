#include <iostream>
using namespace std;

int main() {
    int first, second;
    while(true) {
        scanf("%d %d", &first, &second);
        if(first == 0 && second == 0)
            return -1;
        printf("%d\n", first + second);
    }
    return 0;
}