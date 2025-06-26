#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    // cin >> str;
    getline(cin, str);

    if(str.empty()) {
        cout << 0;
        return 0;
    }

    string delimiter;
    delimiter = " ";

    int wordStart, wordEnd;
    int count = 0;

    // 문자열 앞뒤 공백 제거
    wordStart = str.find_first_not_of(delimiter);
    str.erase(0, wordStart);
    wordStart = str.find_last_not_of(delimiter);
    str.erase(wordStart + 1, str.length() - wordStart);

    wordStart = 0;
    while((wordStart != string::npos) && !str.empty()) {
        wordEnd = str.find_first_of(delimiter, wordStart);
        count++;
        wordStart = str.find_first_not_of(delimiter, wordEnd);
    }

    cout << count;

    return 0;
}