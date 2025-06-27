#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char c = 97;
    getline(cin, str);
    for(int i=0;i<26;i++) {
        if(str.find_first_of(c) == string::npos)
            printf("-1 ");
        else printf("%d ", str.find_first_of(c));
        c++;
    }
    return 0;
}