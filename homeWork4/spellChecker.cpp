#include <iostream>
#include <string>

using namespace std;

bool isUpperLetter(char a) {
    return a >= 'A' && a <= 'Z';
}

bool isLowerLetter(char a) {
    return a >= 'a' && a <= 'z';
}

bool isSentenceEnd(char a) {
    return a == '!' || a == '?' || a == '.';
}

int main() {
    string line;
    int wrongs = 0;
    bool isStartOfSentence = true;
    while (getline(cin, line)) {
        bool isStartOfWord = true;
        for (int i = 0; i < line.length(); ++i) {
            char theChar = line[i];
            if (isUpperLetter(theChar) || isLowerLetter(theChar)) {
                if (isStartOfSentence) {
                    if (!isUpperLetter(theChar)) {
                        ++wrongs;
                    }
                    isStartOfSentence = false;
                }
                if (isStartOfWord) {
                    isStartOfWord = false;
                } else {
                    if (isUpperLetter(theChar)) {
                        ++wrongs;
                    }
                }
            } else {
                isStartOfWord = true;
            }
            if (isSentenceEnd(theChar)) {
                isStartOfSentence = true;
            }
        }
    }
    cout << wrongs;
}
