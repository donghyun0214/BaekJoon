#include <iostream>
#include <string>
using namespace std;

int main() {
    int count;
    cin >> count;
    cin.ignore();
    for(int i=0;i<count;i++) {
        int wordStart, wordEnd;
        int temp;
        int totalScore = 0;
        string str;
        str = "";
        getline(cin, str);

        wordStart = str.find_first_of("O");
        while(wordStart != string::npos) {
            wordEnd = str.find_first_of("X", wordStart);
            if(wordEnd == string::npos) wordEnd = str.length();
            temp = 0;
            for(int j=1;j<=wordEnd - wordStart;j++)
                temp += j;
            totalScore += temp;
            wordStart = str.find_first_of("O", wordEnd);
        }
        cout << totalScore << "\n";
    }
    return 0;
}