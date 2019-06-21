#include<bits/stdc++.h>

using namespace std;

int isVowel(char c) {
    int isLowerCaseVowel, isUpperCaseVowel;

    isLowerCaseVowel = (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o' || c == 'y');
    isUpperCaseVowel = (c == 'A' || c == 'I' || c == 'U' || c == 'E' || c == 'O' || c == 'Y');

    return isLowerCaseVowel || isUpperCaseVowel;
}

int main() {
    char str[150];
    cin>>str;

    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        int vowelFound = isVowel(str[i]);
        if (!vowelFound) {
            cout<<"."<<(char)tolower(str[i]);
        }
    }      
}