#include<bits/stdc++.h>

using namespace std;

void change(string& str) {
    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] += 32;
        } else if (str[i] >= 97 && str[i] <= 122) {
            str[i] -= 32;
        }
    }
}

int main() {
    string str;
    int counterCaps = 0;
    bool isFirstLetterNonCaps = false;

    cin>>str;

    int lenStr = str.size();

    for(int i = 0; i < lenStr; i++) {
        if (i == 0 && (str[i] >= 97 && str[i] <= 122)) {
            isFirstLetterNonCaps = true;
        }

        if (str[i] >= 65 && str[i] <= 90) {
            counterCaps++;
        }
    }

    if ((counterCaps == lenStr) || (isFirstLetterNonCaps && counterCaps == lenStr - 1)) {
        change(str);
    }

    cout<<str<<endl;
}