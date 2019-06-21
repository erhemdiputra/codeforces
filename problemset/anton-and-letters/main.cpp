#include<bits/stdc++.h>

using namespace std;

int main() {
    string str;
    map<char, bool> mapLetter;
    int counter;
    getline(cin, str);

    counter = 0;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            if(!mapLetter[str[i]]) {
                mapLetter[str[i]] = true;
                counter++;
            }
        }
    }

    cout<<counter<<endl;
}